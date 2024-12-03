/* @AUTH: EditSokotsu
@Proj: Codewars 8th Kyu | Lost Without a Map
@COMM: Given an array of integers, return a new array with each value doubled. For example: [1, 2, 3] --> [2, 4, 6] */

const exampleArray = [1, 2, 3];

/* @FUNC: maps()
@PARA: x | array of integers
@COMM: double() is the callback function for the map method; it enables the map() method to perform actions on each item in the map. */
function maps(x){
   function double(y){
    return y*2;
   }
   const arr = x.map(double);
   return arr;
}

console.log(maps(exampleArray));