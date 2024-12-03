/*
@AUTH: EditSokotsu
@PROJ: Codewars 7th Kyu | Descending Order
@COMM: Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.
Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321*/


/* 
@FUNC: descendingOrder()
@PARA: n | non-negative integer 
@COMM: the function makes an array from the the integer argument n, which is then sorted and then looped thru backwards to obtain the consistuant integers in descending order. While looping through the array, each element is typecast as a string in order to concatenate the result in the result variable.
*/
function descendingOrder(n){
  var myFunc = num => Number(num); //callback function
  var arra = Array.from(String(n), myFunc);
  var result = "";
  arra.sort();

  for(var i=arra.length-1; i>-1; i--){
    result += String(arra[i]);
  }

  console.log(Number(result));
}
  
  descendingOrder(145263);
