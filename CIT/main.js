
function onSubmit(form)
{
	var FirstName = document.getElementById("fname").value;
	var LastName = document.getElementById("lname").value;
	var PostCode = document.getElementById("pCode").value;
	var Address = document.getElementById("address").value;
	var CreditCard = document.getElementById("cno").value;
	var ExpiryDate = document.getElementById("cexp").value;

	alert(FirstName + "\n" + LastName + "\n" + PostCode + "\n" + Address + "\n" + CreditCard + "\n" + ExpiryDate);
}