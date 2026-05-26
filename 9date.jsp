<%@ page import="java.util.*" %>


<%


	Date dt = new Date();
	out.println("Today's date is : " + dt.getDate() + "/" + (dt.getMonth()+1) + "/" + (dt.getYear()+1900));

	
%>

