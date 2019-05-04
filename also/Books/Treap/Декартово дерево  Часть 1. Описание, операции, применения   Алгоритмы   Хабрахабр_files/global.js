/**
 * Global Scripts
 */

tm.init.add(function(){
  
  $$('#global_notify .close').addEvent('click', function(e){
  	e = new Event(e);
  	var id = $(this).get('data-id');
  	var curent_notification = $('notification_'+id);
  	var next_notification = curent_notification.getNext('.inner');
  	curent_notification.dispose();
    if(next_notification) next_notification.removeClass('hidden');
    
    var req = new Request.JSON({
      url: '/json/notifications/close/',
      data: { 'id' : id }
    }).send();
    
  	e.stop();
  });
  
});