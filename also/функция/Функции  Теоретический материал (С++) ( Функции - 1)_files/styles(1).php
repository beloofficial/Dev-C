/*1413123647*/
/**************************************
 * THEME NAME: formal_white
 *
 * Files included in this sheet:
 *
 *   formal_white/fw_layout.css
 *   formal_white/fw_color.css
 *   formal_white/fw_fonts.css
 **************************************/

/***** formal_white/fw_layout.css start *****/

/* Core */

body {
    margin: 5px;
}


h1.main,
h2.main,
h3.main,
h4.main,
h5.main,
h6.main {
  text-align: left;
  padding-left: 5px;
} 

h1, h2, h3, h4 {
  text-align: left;
}

h1 {
  padding: 6px;
}

h2 {
  padding: 4px;

}

h3 {
  padding: 3px;

}

#content {
clear:both;
}
  
h1, h2, h3 {
  border-width: 1px;
  border-style: solid; 
}

h4 {
  border-bottom-style: solid;
  border-bottom-width:1px; 
}

input, select {
  padding: 0px;
}
#layout-table #middle-column{
  vertical-align:top;
  padding-left:6px;
  padding-right:6px;
}
.sitetopic {
  padding:4px;
  margin: 0px;
}

.generaltable {
  border-width:0px; 
}

.generalbox {
  border-width:1px; 
  border-style:solid;  
}

.sitetopiccontent {
  border-width:1px;
  border-style:solid;
}

.clearfix { 
 min-width: 0; 
 /* overflow: hidden; */ 
}

.clearfix:after {
  /* content: "<!-- -->";  */
  content: "."; 
  display: block; 
  height: 0; 
  clear: both; 
  visibility: hidden;
}

/* Hides from IE-mac \*/
* html .clearfix {height: 1%;}
.clearfix {display: block;}
/* End hide from IE-mac */

/***
 *** Header
 ***/

.headerskip {
  position:absolute;
  right:20em;
  font-size:0.8em;
}

#header-home {
  /* padding:1em 0.5em; */
  height:55px;
  border-width:1px;
  border-style:solid;
}

#header {
  height:55px;
  border-width:1px;
  border-style:solid;
}

.headermain, h1.headermain {
  float:left;
  margin:0%;
  padding:0%;
  border-width: 0px;
}

.headermenu {
  float:right;
  text-align:right;
}

.navbar {
  width:100%;
  padding:3px 0.5em;
  border-width:1px;
  border-style:solid;
}

div.navbar {
  width: auto;
}

table.navbar {
  width: 100%;
}

.navbar .navbutton form {
  float: left;
}

.navbar .navbutton {
  margin-top: 3px;
}

.navbar .breadcrumb {
  float:left;
  margin:0.2em 0em;
}

.breadcrumb ul {
  padding:0%;
  margin:0%;
  text-indent:0%;
  list-style:none;
}
.breadcrumb li {
  display:inline;
}

.navbar .navbutton,
.navbar .menu {
  float:right;
}

#footer .navbar {
  margin-top: 4em;
}


/***
 *** Login
 ***/

TABLE.loginbox {
  margin-top: 40px;
}

.loginbox .header {
  border-width:1px;
  border-style:solid;
  border-bottom-width: 0px;
}

.loginbox .content {
  border-top-width: 1px;
}


/***
 *** Footer
 ***/
 
#footer {
  text-align:left;
  margin-top: 5px;
  margin-bottom: 0px;
}

 
#footer p.helplink {
 margin-bottom: 0px;
}


/***
 *** Blocks
 ***/
 
 .sideblock .header h2 {
  border-width: 0px;
 }
 
.sideblock .footer {
  border-top-width:1px;
  border-top-style:dashed;
}
  

/***
 *** Calendar
 ***/
 
#calendar .today,
.minicalendar .today {
  border:1px solid !important;
} 
 
 table.minicalendar {
  width: 100%;
  margin:10px auto;
  padding:2px;
  border-width:1px;
  border-style:solid;
  border-collapse:separate;
  border-spacing:1px !important;
}

table.minicalendar tr.weekdays th {
   border-style: none;
}

table.minicalendar tr td.day {
  border-style: solid;
  border-width: 1px;
}

table.minicalendar tr.weekdays th abbr {
  border-style: none;

  }

table.calendarmonth {
  border-collapse:separate;
  border-spacing:1px !important;
}

table.calendarmonth tr td  {
  border-style: solid;
  border-width: 1px;
}


/***
 *** Course
 ***/
 
.headingblock {
  border-width:1px;
  border-style:solid;
  padding:5px;
}


.categorybox .category,
.categorybox .category {
  border-bottom: solid;
  border-width: 1px;
  padding-top: 7px;
}

#course-view .section .left {
  border-right-width: 1px;
  border-right-style: dashed;
}

#course-view .section.hidden .content,
#course-view .section.hidden .side {
  border-width: 1px;
  border-style: dashed;
}


.tabrow0 { 
   padding-top: 4px; 
} 


/***** formal_white/fw_layout.css end *****/

/***** formal_white/fw_color.css start *****/

/* Core */

body {
  background-color: #F7F6F1;
}

a:link {
    color: #0033CC;
}

a:visited {
    color:#0033CC;
}

a:hover {
    color: #990000;
}

a.dimmed:link,
a.dimmed:visited {
  color:#AAAAAA;
}

h1 {
  background-color: #C6BDA8;
  border-color: #333333;
  color: #333333;
}

h2 {
  background-color: #E3DFD4;
  border-color:#C6BDA8;
}
h3 {
  border-color:#C6BDA8;
}
h4 {
  border-color:#C6BDA8;
}


th {
    background-color:#E3DFD4;

}

th.header,
td.header,
div.header {
  background-color: #E3DFD4;

}

#layout-table #left-column {
    /* background-color: yellow; */
}

.generalbox {
  border-color:#C6BDA8;
  background-color:#FFFFFF;
}

.generaltable,
.generaltable td {
  border-color:#C6BDA8;
  /* background-color:#FFFFFF; */
}

.generaltable .r0 td.cell.c0 {
 background-color:#C6BDA8; 
}

.generaltable .r1 td.cell.c0 {
border-color:#C6BDA8; 
background-color:#E3DFD4; 
}


.navbar {
  background-color:#C6BDA8;
  border-color:#666666;
  /* height: 20px; */
  background: url(pix/grad/bg_bread.jpg) repeat-x;
}

.sitetopiccontent {
  border-color:#C6BDA8;
  background-color:#FFFFFF;
}

.highlight {
  background-color:#C6BDA8;
}

.highlight2 {
  color:#C6BDA8; /* highlight missing terms in forum search */
}



/***
 *** Header
 ***/

#header-home, #header {
  background-color: #E3DFD4;
  border-color:#C6BDA8;
}

h1.headermain {
  background-color: transparent;
}

/***
 *** Login
 ***/


.loginbox,
.loginbox.twocolumns .loginpanel,
.loginbox .subcontent {
  border-color:#C6BDA8;
}

.loginbox .content {
  border-color:#C6BDA8;
}


/***
 *** Blocks
 ***/
 
.sideblock .header {
  border-color: #C6BDA8;
}

.sideblock {
  border-color:#C6BDA8;
}

.sideblock .content {
  border-color:#C6BDA8;
  background-color:#FEF9F6;
}

.sideblock hr {
  color:#C6BDA8;
  /*background-color:#FEF9F6;*/
}

.sideblock .footer {
  border-top-color:#C6BDA8;
}

.sideblock .header .hide-show img.hide-show-image {
  background: url('../../pix/t/switch_minus.gif') no-repeat bottom;
}

.sideblock.hidden .header .hide-show img.hide-show-image {
  background: url('../../pix/t/switch_plus.gif') no-repeat bottom;
}

.sideblock .content .post .head .date,
.sideblock .content .post .head .name {
  color: #000000;
  }

/***
 *** Calendar
***/
 
#calendar .maincalendar,
#calendar .sidecalendar,
#calendar .maincalendar .event {
  border-color: #C6BDA8;
}

#calendar .maincalendar table.calendarmonth th {
  border-color: #C6BDA8;
}


table.calendarmonth tr td {
   border-color:#C6BDA8;
} 

table.minicalendar {
  border-color:#C6BDA8;
}

table.minicalendar tr.weekdays th {
  background-color:#FEF9F6;
  border-color:#C6BDA8;
  }

table.minicalendar tr td.day {
   border-color:#C6BDA8;
  }
  
table.minicalendar tr td.weekend {
  border-color:#C6BDA8;
  color: red;
  }
  
#calendar .today,
.minicalendar .today {
  border-color:#000000 !important;
}
  
/* colors for calendar events */
#calendar .event_global,
.minicalendar .event_global,
.block_calendar_month .event_global {
  border-color:#2EBA0E !important;
  background-color:#2EBA0E;
}

#calendar .event_course,
.minicalendar .event_course,
.block_calendar_month .event_course {
  border-color:#FF9966 !important;
  background-color:#FF9966;
}

#calendar .event_group,
.minicalendar .event_group,
.block_calendar_month .event_group {
  border-color:#FBBB23 !important;
  background-color:#FBBB23;
}

#calendar .event_user,
.minicalendar .event_user,
.block_calendar_month .event_user {
  border-color:#A1BECB !important;
  background-color:#A1BECB;
}

.cal_popup_fg {
  background-color:#FEF9F6;
}

.cal_popup_bg {
  border-color:#C6BDA8;
  background-color:#FEF9F6;
}


/***
 *** Course
 ***/

.headingblock {
  border-color:#C6BDA8;
}

.categoryboxcontent,
.courseboxcontent {
  border-color:#C6BDA8;
  background: #FFFFFF;
}

.categorybox .category,
.categorybox .category {
  border-color: #C6BDA8;
}

#course-view .section.main .content {
  border-color: #C6BDA8;
  background-color: #FFFFFF;
}

#course-view .section.main .side {
  border-color: #C6BDA8;
  background-color: #FFFFFF;
}

#course-view .current .right.side,
#course-view .current .left.side {
  background-color: #C6BDA8;
}

#course-view .section.hidden .content,
#course-view .section.hidden .side {
  border-color:#C6BDA8;
 }




/***
 *** Tabs
 ***/

.tabs .side {
  border-color: #C6BDA8;
}
.tabrow td {
  background:url(pix/tab/left.gif) top left no-repeat;
}
.tabrow td .tablink {
  background:url(pix/tab/right.gif) top right no-repeat;
}
.tabrow td:hover {
  background-image:url(pix/tab/left_hover.gif);
}
.tabrow td:hover .tablink {
  background-image:url(pix/tab/right_hover.gif);
}
.tabrow .last span {
  background:url(pix/tab/right_end.gif) top right no-repeat;
}
.tabrow .selected {
  background:url(pix/tab/left_active.gif) top left no-repeat;
}
.tabrow .selected .tablink {
  background:url(pix/tab/right_active.gif) top right no-repeat;
}
.tabrow td.selected:hover {
  background-image:url(pix/tab/left_active_hover.gif);
}
.tabrow td.selected:hover .tablink {
  background-image:url(pix/tab/right_active_hover.gif);
}

/***
 *** Modules: Forum
 ***/

.forumheaderlist,
.forumpost {
  border-color:#C6BDA8;
}

.forumpost .content {
  background: #FEF9F6;
}

.forumpost .left {
  background:#FEF9F6; 
}

.forumpost .topic {
  border-bottom-color: #C6BDA8;
}

.forumpost .starter {
  background:#FEF9F6; 
}

.forumheaderlist .discussion .starter {
  background:#FEF9F6; 
}

.forumheaderlist td {
  border-color: #C6BDA8;
}

.sideblock .post .head {
  color:#FEF9F6;
}

.forumthread .unread {
  background: #FEF9F6;
}
#mod-forum-discuss .forumpost {
  background: none;
}

#mod-forum-discuss .forumpost.unread .content {
  border-color: #C6BDA8; 
} 

#mod-forum-discuss .forumthread .unread {
} 

#mod-forum-index .unread {
}
/***** formal_white/fw_color.css end *****/

/***** formal_white/fw_fonts.css start *****/

/* Core */

.clearer {
  font-size:1px;
}

body, td, li {
    font-family: Arial, Helvetica, sans-serif;
    font-size : 13px;
}

body {
    margin : 5px;
}

th {
  font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
  font-size: 11px;
  font-weight: bold;
}

span.ProblemStatement
	{mso-style-name:"Problem Statement Знак";
	mso-style-parent:"Основной шрифт абзаца1";
	mso-ansi-font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	mso-ansi-language:RU;
	mso-fareast-language:AR-SA;
	mso-bidi-language:AR-SA;}
span.ProblemExample
	{mso-style-name:"Problem Example Знак";
	mso-style-parent:"Problem Statement Знак";
	mso-ansi-font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:"Courier New";
	mso-ascii-font-family:"Courier New";
	mso-hansi-font-family:"Courier New";
	mso-ansi-language:EN-US;
	mso-fareast-language:AR-SA;
	mso-bidi-language:AR-SA;}
p.a1, li.a1, div.a1
	{mso-style-name:Заголовок;
	mso-style-next:"Основной текст";
	margin-top:12.0pt;
	margin-right:0cm;
	margin-bottom:6.0pt;
	margin-left:0cm;
	mso-pagination:widow-orphan;
	page-break-after:avoid;
	mso-hyphenate:none;
	font-size:14.0pt;
	font-family:Arial;
	mso-fareast-font-family:"Segoe UI";
	mso-bidi-font-family:Tahoma;
	mso-fareast-language:AR-SA;}
p.10, li.10, div.10
	{mso-style-name:Название1;
	margin-top:6.0pt;
	margin-right:0cm;
	margin-bottom:6.0pt;
	margin-left:0cm;
	mso-pagination:widow-orphan no-line-numbers;
	mso-hyphenate:none;
	font-size:12.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:Tahoma;
	mso-fareast-language:AR-SA;
	font-style:italic;}
p.11, li.11, div.11
	{mso-style-name:Указатель1;
	margin:0cm;
	margin-bottom:.0001pt;
	mso-pagination:widow-orphan no-line-numbers;
	mso-hyphenate:none;
	font-size:12.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:Tahoma;
	mso-fareast-language:AR-SA;}
p.ProblemStatement0, li.ProblemStatement0, div.ProblemStatement0
	{mso-style-name:"Problem Statement";
	margin:0cm;
	margin-bottom:.0001pt;
	text-align:justify;
	text-indent:35.45pt;
	mso-pagination:widow-orphan;
	mso-hyphenate:none;
	font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:"Times New Roman";
	mso-fareast-font-family:"Times New Roman";
	mso-fareast-language:AR-SA;}
p.ProblemCaption, li.ProblemCaption, div.ProblemCaption
	{mso-style-name:"Problem Caption";
	mso-style-parent:"Problem Statement";
	mso-style-next:"Problem Statement";
	margin-top:6.0pt;
	margin-right:0cm;
	margin-bottom:9.0pt;
	margin-left:0cm;
	text-align:justify;
	text-indent:0cm;
	page-break-before:always;
	mso-pagination:widow-orphan;
	mso-list:l0 level1 lfo1;
	mso-hyphenate:none;
	tab-stops:list 0cm;
	font-size:16.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:Arial;
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";
	mso-fareast-language:AR-SA;
	font-weight:bold;
	mso-bidi-font-weight:normal;}
p.ProblemConstraints, li.ProblemConstraints, div.ProblemConstraints
	{mso-style-name:"Problem Constraints";
	mso-style-parent:"Problem Statement";
	mso-style-next:"Problem Statement";
	margin:0cm;
	margin-bottom:.0001pt;
	text-align:justify;
	mso-pagination:widow-orphan;
	mso-hyphenate:none;
	font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:"Courier New";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";
	mso-fareast-language:AR-SA;}
p.ProblemIOE, li.ProblemIOE, div.ProblemIOE
	{mso-style-name:"Problem IOE";
	mso-style-parent:"Problem Statement";
	mso-style-next:"Problem Statement";
	margin-top:6.0pt;
	margin-right:0cm;
	margin-bottom:3.0pt;
	margin-left:0cm;
	text-align:justify;
	mso-pagination:widow-orphan;
	mso-hyphenate:none;
	font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:Arial;
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";
	mso-fareast-language:AR-SA;
	font-weight:bold;
	mso-bidi-font-weight:normal;
	font-style:italic;
	mso-bidi-font-style:normal;}
p.ProblemExampleCaption, li.ProblemExampleCaption, div.ProblemExampleCaption
	{mso-style-name:"Problem Example Caption";
	mso-style-parent:"Problem Statement";
	margin:0cm;
	margin-bottom:.0001pt;
	text-align:center;
	mso-pagination:widow-orphan;
	mso-hyphenate:none;
	font-size:12.0pt;
	mso-bidi-font-size:11.0pt;
	font-family:"Courier New";
	mso-fareast-font-family:"Times New Roman";
	mso-bidi-font-family:"Times New Roman";
	mso-ansi-language:EN-US;
	mso-fareast-language:AR-SA;
	font-weight:bold;
	mso-bidi-font-weight:normal;}

a:link {
    text-decoration: none;
}

a:visited {
    text-decoration: none;
}

a:hover {
    text-decoration: underline;
}

h1, h2, h3, h4 {
    font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
}

h1 {
    font-size:1.2em;
    font-weight: bold;
}

h2 {
    font-size:1.15em;
}
h3 {
    font-size:1.1em;
}
h4 {
    font-weight:bold;
}

th.header,
td.header,
div.header,
.headingblock {
    font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
    font-weight: bold;
    font-size: 0.9em;
}


.categorybox .category {
/*  font-family: Verdana, Geneva, Arial, Helvetica, sans-serif; */
    font-size: 1.2em;
    font-weight: bold;
}

.generaltable td.cell.c0 {
  font-weight: bold;
}
/***
 *** Header
 ***/
 
.breadcrumb {
    font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
    font-size:.85em;
    font-weight:bold;
}

.logininfo,
#header-home .headermenu font {
     font-size:.8em;
}

 /***
 *** Blocks
 ***/
 
.sideblock .footer {
    font-size:0.85em;
    text-align: left;
}

/***
 *** Calendar
 ***/
#calendar .maincalendar table.calendarmonth td {
  font-size:.8em;
}

#calendar .maincalendar .calendar-controls .current {
  font-weight: bold;
}

#calendar .sidecalendar .filters {
  font-size:0.75em
  }

table.minicalendar tr.weekdays th {
  font-family: Verdana, Geneva, Arial, Helvetica, sans-serif;
  font-size:0.7em;
  font-weight:normal;
  }

table.minicalendar tr td {
  font-size:0.7em;
  }
  
/***
 *** Course
 ***/
  
#course-view .section .left {
  font-weight: bold;
  font-size: 1.2em;
}

/*Accessibility: resizable icons. */
img.resize {
  width: 1em;
  height: 1em;
}
/***** formal_white/fw_fonts.css end *****/

/*1413123647*/
