<html>
<%! String colorCode; %>
<%
	colorCode= request.getParameter("txt1");
	if(colorCode.isEmpty())
	{

		response.sendRedirect("3changeColor.html");
	}
%>


<body bgcolor='<%=colorCode%>'>

<center> Hello World </center>
</body>

</html>