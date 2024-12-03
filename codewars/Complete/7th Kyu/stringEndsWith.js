/* 
@AUTH: EditSokotsu
@PROJ: Codewars 7th Kyu | String ends with?
@COMM: Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
 */

/*
@FUNC: solution()
@PARA: str, ending | str --> the main string on which the evaluation is based, ending --> the substring to be evaluated
@COMM:
*/
function solution(str, ending){
    let compStr = ""
    if(ending.length === 1){
        compStr = str.substr(str.length-1)
        if(compStr === ending)
            console.log(true)
        else
            console.log(false)
    } 
    else{
        compStr = str.substr(str.length - ending.length)
        if(compStr === ending)
            console.log(true)
        else
            console.log(false)
    }
}

solution('samurai', 'ra')