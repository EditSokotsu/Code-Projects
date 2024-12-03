/* 
@AUTH: EditSokotsu
@PROJ: Codewars 8th Kyu | Opposite Number
@COMM: Very simple, given a number (integer / decimal / both depending on the language), find its opposite (additive inverse).

Examples:

1: -1
14: -14
-34: 34
*/
#include <iostream>

using namespace std;

int opposite(int number){
    if(number>0) //if number is greater than 0, return a -ve
        return -(number);
    else 
        return number*(-1);
}

int main(){
    int x;
    x = opposite(-5897);
    cout<<x;

    return 0;
}