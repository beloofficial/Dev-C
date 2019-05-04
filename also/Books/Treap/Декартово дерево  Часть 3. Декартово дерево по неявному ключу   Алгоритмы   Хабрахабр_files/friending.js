friendingHandler = {
	url: '/ajax/users/friends/',
	xml: {
		responseNodes: {
			error : 'error',
			result : 'message',
			text : 'text'
		},

		parse: function(xmlObj){
			var xmlNodes = {};
			for (prop in friendingHandler.xml.responseNodes) {
				xmlNodes[prop] = xmlObj.getElementsByTagName(friendingHandler.xml.responseNodes[prop]);
			}
			return xmlNodes;
		}
	},
	
	friendUnfriend : function(friendId, friend) {
		profileForm.hidePanels();
		if (friend) {
			$('js-addFriendMessage').removeClass('hidden');
			$('js-addFriendSendButton').removeClass('hidden');
		} else {
			$('js-addFriendMessage').removeClass('hidden');
			$('js-removeFriendSendButton').removeClass('hidden');
		}
	},
	
	addFriendSend : function (friendId) {
		var data = 'action=friend&friendId=' + friendId + '&msg=' + $('js-FriendUnfriendMessage').value;
		ajaxLoadPost(friendingHandler.url, data, function(ajaxObj) {
            friendingHandler.addFriendOnload(ajaxObj)
        });
	},
	
	removeFriendSend : function (friendId) {
		var data = 'action=unfriend&friendId=' + friendId + '&msg=' + $('js-FriendUnfriendMessage').value;
		ajaxLoadPost(friendingHandler.url, data, friendingHandler.removeFriendOnload);
	},
	
	addFriendOnload : function(ajaxObj) {
		if(ajaxObj && ajaxObj.responseXML){
			var xmlObj = ajaxObj.responseXML;
			var xmlNodes = friendingHandler.xml.parse(xmlObj);
			if(xmlNodes.error && xmlNodes.error.length){
				var errors_length = xmlNodes.error.length;
				for (var i = 0; i < errors_length; i++) {
					futu_alert(FAT.friendlier_header, xmlNodes.error[i].firstChild.data, true, 'error');
				}
			}
			if(xmlNodes.result && xmlNodes.result.length) {
				if(xmlNodes.text && xmlNodes.text.length) {
					futu_alert(FAT.friendlier_header, xmlNodes.text[0].firstChild.data, false, 'message');
				}
				$('js-FriendUnfriendMessage').value = '';
				$('js-addFriendMessage').addClass('hidden');
				$('js-addFriendSendButton').addClass('hidden');

				//$('js-addFriendButton').addClass('hidden');
				//$('js-deleteFriendButton').removeClass('hidden');
                
	            $$("profile-actions-friend-add").setStyle('display', 'none')
	            $$("profile-actions-friend-del").setStyle('display', 'inline')
			}
		}
	},
	
	removeFriendOnload : function(ajaxObj) {
		if(ajaxObj && ajaxObj.responseXML){
			var xmlObj = ajaxObj.responseXML;
			var xmlNodes = friendingHandler.xml.parse(xmlObj);
			if(xmlNodes.error && xmlNodes.error.length){
				var errors_length = xmlNodes.error.length;
				for (var i = 0; i < errors_length; i++) {
					futu_alert(FAT.friendlier_header, xmlNodes.error[i].firstChild.data, true, 'error');
				}
			}
			if(xmlNodes.result && xmlNodes.result.length) {
				futu_alert(FAT.friendlier_header, 'Вы удалили друга :(', false, 'message');
				$('js-FriendUnfriendMessage').value = '';
				$('js-addFriendMessage').addClass('hidden');
				$('js-removeFriendSendButton').addClass('hidden');

				//$('js-addFriendButton').removeClass('hidden');
				//$('js-deleteFriendButton').addClass('hidden');
			}
		}
	},
	
	answer : function(answer, message_id, user_id, friend_id) {
		var data = 'action=reply&answer=' + answer + '&message_id=' + message_id + '&user_id=' + user_id + '&friend_id=' + friend_id;
		ajaxLoadPost(friendingHandler.url, data, friendingHandler.answerOnload);
	},
	answerOnload : function(ajaxObj) {
		if(ajaxObj && ajaxObj.responseXML){
			var xmlObj = ajaxObj.responseXML;
			var xmlNodes = friendingHandler.xml.parse(xmlObj);
			if(xmlNodes.error && xmlNodes.error.length){
				var errors_length = xmlNodes.error.length;
				for (var i = 0; i < errors_length; i++) {
					futu_alert(FAT.friendlier_header, xmlNodes.error[i].firstChild.data, true, 'error');
				}
			}
			if(xmlNodes.text && xmlNodes.text.length) {
				$('friend-mail-action').innerHTML = xmlNodes.text[0].firstChild.data;
			}
		}	
	}
};

companiesHandler = {
	workerSend : function (company_id, add, fav) {
		var peopleList,peopleCounter,peopleMenu;
		(new Request({
            'url': temp.base + 'ajax/company/set/',
            'data': {
                'action': add ? ( fav ? 'fan_add' : 'worker_add') : ( fav ? 'fan_del' : 'worker_del'),
				'company_id' : company_id
            },
			"onRequest":function(){
				peopleList = fav ? $('js-companyFansList') : $('js-companyWorkersList');
				peopleCounter = fav ? $('js-companyFansCount') : $('js-companyWorkersCount');
				peopleMenu = $(document).getElement(".profile-actions-menu .js-your-work-state");
			},
			"onSuccess": function(r,rxml){
				var errors = rxml.getElementsByTagName("error");
				if (errors && errors.length) {
					var errorstext = "";
					for (var i=0,l=errors.length; i < l; i++) {
						errorstext += errors[i].firstChild.data + "</br>";
					};
					futu_alert("Ой-ой-ой с колбасой!", errorstext, false, 'error');
				}
				var message = rxml.getElementsByTagName("message")[0];
				var company = rxml.getElementsByTagName("company")[0];				
				
				if (message) {
					var userNode = rxml.getElementsByTagName('user')[0],
						userName = userNode.firstChild.data,
						userUrl  = userNode.getAttribute('url');
					if (add) {						
						peopleMenu && peopleMenu.addClass( fav ? "js-you-love-this-corp" : "js-you-work-here");
						peopleList && (((new Element('li')).adopt((new Element("a", {'text': userName , 'href': "http://" + userUrl +'/'})))).inject(peopleList));
						peopleCounter && ((peopleCounter.innerHTML = Number(peopleCounter.innerHTML) + 1));
					} else {
						peopleMenu && peopleMenu.removeClass( fav ? "js-you-love-this-corp" : "js-you-work-here");
						peopleCounter && (peopleCounter.innerHTML = Number(peopleCounter.innerHTML) - 1);
						var userQuery = 'a[href=http://'+userUrl+'/]';
						peopleList && peopleList.getElement(userQuery).getParent().dispose();
					}
				  var count = company.getAttribute('fans_count_str');
				  if($('fans_count')) $('fans_count').set('html', count);
				}
				
			}
        })).send();
	},
	fanSend : function (company_id, addFan) {
		this.workerSend(company_id, addFan, true);
	}
};
