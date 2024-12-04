const palindromeTextInput = document.querySelector("#text-input");
const checkBtn = document.querySelector("#check-btn");
let resultText = document.querySelector("#result");

function clearResult(){
    resultText.innerText = "";
    return;
}

function palindromeChecker(str){
    clearResult();
    const originalStr = str;

    if(str === ""){
        alert("Please input a value")
        return;
    }

    const testStr = str.replace(/[^A-Za-z0-9]/g, "").toLowerCase();
    testStr === [...testStr].reverse().join("") ? 
    resultText.innerText = `${originalStr} is a palindrome`  : resultText.innerText = `${originalStr} is not a palindrome`;
    
}

checkBtn.addEventListener("click", () => {
    palindromeChecker(palindromeTextInput.value);
    palindromeTextInput.value = "";
});

checkBtn.addEventListener("keydown", e => {
    if(e.key === "Enter"){
        palindromeChecker(palindromeTextInput.value);
        palindromeTextInput.value = "";
    }
});