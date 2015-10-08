<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml"  xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html;charset=iso-8859-1" />
<title>Nested Loop Multiplication Table</title>
</head>

<body>
<h2>Nested Loop Multiplication Table</h2>
 
<?php
echo "<table border=\"1\">";
for ($row=1; $row<=7; $row++){
  echo "<tr>\n";
  for ($col=1; $col<=7; $col++){
    $x=$col * $row;
    echo "<td>$x</td>\n";
  }
  echo "</tr>";
}
echo "</table>";
?>

</body>
</html>