<html>
<head>
<title>JSP Page</title>
</head>
<body>
	<jsp:useBean id="myname" class="newpackage.sc"/>

        Using jsp xml syntax of getProperty &nbsp;----->&nbsp; 
	<jsp:getProperty name="myname" property="msg"/>

	<br><hr>

	Using jsp expresion &nbsp;----->&nbsp; 
	<%=myname.getMsg()%>

	<br><hr>

	Set the value if msg using setProperty using jsp xml syntax of setProperty
	<jsp:setProperty name="myname" property="msg" value="from index"/>

	<br><hr>
	Using jsp xml syntax of getProperty &nbsp;----->&nbsp; 
	<jsp:getProperty name="myname" property="msg"/>

	<br><hr>

	Using jsp expresion &nbsp;----->&nbsp; 
	<%=myname.getMsg()%>

	<br><hr>

	set value using setMsg methos of sc class
	<%myname.setMsg("using setMsg method");%>

	<br><hr>

	Using jsp xml syntax of getProperty &nbsp;----->&nbsp; 
	<jsp:getProperty name="myname" property="msg"/>
	
	<br><hr>
	
	Using jsp expresion &nbsp;----->&nbsp; 
	<%=myname.getMsg()%>

	<br><hr>
	
	
	
</body>
</html>