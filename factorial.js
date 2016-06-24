<html>
<head>
<script>
function factorial(){
var i, no, fact;
fact=1;
no=Number(document.getElementById("num").value);
for(i=1; i<=no; i++)  
{
fact= fact*i;
}  
document.getElementById("answer").value= fact;
}
</script>
</head>
<body>
Enter a Number: <input id="num">
<button onclick="factorial()">Factorial</button>
<input id="answer">
</body>
</html>
