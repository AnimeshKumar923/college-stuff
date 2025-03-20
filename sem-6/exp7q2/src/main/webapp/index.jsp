<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Employee Search</title>
  </head>
  <body>
    <h2>Employee Search</h2>
    <form action="EmployeeServlet" method="get">
      Search by Employee ID: <input type="text" name="empId" /><br/><br/>
      <input type="submit" value="Search" />
    </form>
    <br/>
    <a href="EmployeeServlet">View All Employees</a>
  </body>
</html>
