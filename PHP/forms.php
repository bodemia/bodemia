<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml"  xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html;charset=iso-8859-1" />
<title>Form Response with If-Else Statement</title>
</head>
 <body>
<h2>Favorite City</h2>
<?php
//If form not submitted, display form.
if (!isset($_POST['submit'])){
?>

<form method="post" action="yourfile.php">
<!--Make sure you have entered the name you gave the file as the action.-->
Please enter your favorite city:  <br />
<input type="text" name="city" />
<p />
<input type="submit" name="submit" value="Go" />
</form>

<?php
//If form submitted, process input.
}else{
 //Retrieve string from form submission.
$city = $_POST['city'];
echo "Your favorite city is $city.";
 }
?>
 </body>
</html>

<!--function foo(){
  echo "hello";
}
foo();
->

