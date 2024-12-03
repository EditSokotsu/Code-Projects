/* 
@AUTH: EditSokotsu
@PROJ: Codewars 8th Kyu | You Can't Code Under Pressure #1
@COMM: Code as fast as you can! You need to double the integer and return it.*/
#include <iostream>

using namespace std;

int double_num(int x){
   return x*2; 
}
    
int main(){
    int num;
    num = double_num(87);
    cout<<num;
    
    return 0;
}