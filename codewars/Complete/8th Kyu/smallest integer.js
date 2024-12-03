/* 
@AUTH: EditSokotsu
@PROJ: Codewars 8th Kyu | Smallest Integer
@COMM: Given an array of integers your solution should find the smallest integer. For example:

    Given [34, 15, 88, 2] your solution will return 2
    Given [34, -345, -1, 100] your solution will return -345

You can assume, for the purpose of this kata, that the supplied array will not be empty.
 */

const intArra = [34, -345, -1, 100] ;

function findSmallestInt(someArray){
    let smallestInt = someArray[0];
    
    for(let i = 0; i < someArray.length; i++){
        if(smallestInt == someArray[i])
            continue;
        else if(smallestInt > someArray[i])
            smallestInt = someArray[i];
        else
            continue;
    }

    return smallestInt;
 }

 console.log(findSmallestInt(intArra))