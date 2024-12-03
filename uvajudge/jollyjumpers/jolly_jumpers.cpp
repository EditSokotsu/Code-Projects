/*@proj:    Jolly Jumpers
  @auth:    EditSokotsu
  @comm:    this project solves the Jolly Jumpers problem, but has a 
            few flaws [as of 08:08am/11/2/2020]. There's an off-by-1
            error re:counting the # of ints in the sequence, and does
            not read in more than 1 sequence from a file. There is also an
            issue with doing arithmetic with vector[thus array was used, might
            be IntelliSense]. Use minimum integer to intialise array, in future.*/
#include <iostream>
#include<fstream>
#include<cmath>
#include<vector>
 
using namespace std;

int main()
{
    int num, n=0, m;
    int max_diff, count=0;
    int num_arra[3000];
    ifstream infile;
    infile.open("jolly_jumpers.txt");

    for(count=0; count<3000; count++)
    {
        num_arra[count]=0;
    }
    count=0;
    while(infile){
        infile>>num;
        num_arra[count]=num;
        count++;
    }
    max_diff=count-1;
    cout<<"there are "<<count<<" integers in this sequence\n";
    cout<<"the max difference to be 'jolly' is "<<max_diff<<"\n";
    
    while(num_arra[n+1]!=0){
        m=num_arra[n]-num_arra[n+1];
        if(max_diff<abs(m)){
            cout<<"this sequence is not 'jolly'\n";
            return 0;
        }
        else{
            n++;
        }
        
    }
    cout<<"if you see this, then this sequence is 'jolly'\n";
    delete[] num_arra;
    infile.close();
    return 0;
}