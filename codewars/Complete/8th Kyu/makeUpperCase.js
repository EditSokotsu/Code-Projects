/* @AUTH: EditSokotsu
@Proj: Codewars 8th Kyu | MakeUpperCase
@COMM: Write a function which converts the input string to uppercase. */

/* @FUNC: makeUpperCase()
@PARA: someString
@COMM: the function uses JS toUpperCase method to return the string in the argument in uppercase */
function makeUpperCase(someString){
    return someString.toUpperCase();
}
 
let myString = "HELLO";

console.log(makeUpperCase(myString));