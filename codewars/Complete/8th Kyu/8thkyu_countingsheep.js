/* @AUTH: EditSokotsu
@Proj: Codewars 8th Kyu | Counting sheep
@COMM: Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present). */

const sheepArra = [true,  true,  true,  false,
    true,  true,  true,  true ,
    true,  false, true,  false,
    true,  false, false, true ,
    true,  true,  true,  true ,
    false, false, true,  true]

/* @FUNC: countSheep()
@PARA: sheep | array of items (in this case --> "sheep")
@COMM: the function loops through an array, checking for true values ("present sheep"). Every true value adds to sheepCount, any bad values (false, null, undefined | "missing sheep") are skipped over via the continue keyword. When the loop terminates, the function returns the value of sheepCount. */
function countSheep(sheep) {
    let sheepCount = 0;

    for(let i = 0; i<sheep.length; i++){
        if(sheep[i] === true){
            sheepCount++;
        }
        else if(sheep[i] === false || sheep[i] === null || undefined){
            continue;
        }
        
    }
    return sheepCount;
}

console.log(countSheeps(sheepArra));