<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Login Form</title>
  </head>
  <body>
    <h2>Login Form</h2>
    <form action="LoginServlet" method="post">
      Username: <input type="text" name="username" required /><br/><br/>
      Password: <input type="password" name="password" required /><br/><br/>
      <input type="submit" value="Login" />
    </form>
  </body>
</html>
