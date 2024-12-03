/* 
@AUTH: EditSokotsu
@PROJ: Codewars 5th Kyu | Extract the domain name from a URL
@COMM: Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. For example:

* url = "http://github.com/carbonfive/raygun" -> domain name = "github"
* url = "http://www.zombie-bites.com"         -> domain name = "zombie-bites"
* url = "https://www.cnet.com"                -> domain name = cnet"
*/

//regular expressions
function domainName(url){
    let domainStr = "";
    let urlArr;
    let char = "";
    if(url.includes("www.")){
        urlArr = url.split(".")
        domainStr = urlArr[1];
    } 
    else{
        urlArr = url.split("/");
        let store = urlArr[2].split(".");
        domainStr = store[0];
    }
    

    console.log(`the domain name is: ${domainStr}`) ;
}

domainName("https://www.cnet.com");