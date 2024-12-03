/* @proj: UVAjudge(3n+1)
   @auth: EditSokotsu
   @stat: solved, not submitted
   @comm: This project implements the UVAjudge 3n+1 problem. The challenge simulates algorithm
          analysis. The problem is to run the algorithm for a certain range of integers, i and j 
          (inclusive), and then return the maximum cycle length the algorithm produces in that range.  */
#include<iostream>
#include<fstream>
using namespace std;

/*@func:    alg()
  @para:    int n
  @comm:    implements the 3n+1 algorithm. If n==1, then the cycle==1; otherwise we either modify
            n by 3n+1 or by n/2, depending on whether n is odd or even respectively, until n==1.
            I won't lie, for some reason my solution won't work unless I update cycle in the n==1
            part of my while loop, and I DON'T KNOW WHY, XD! Still produces correct results for the 
            sample input on the UVAjudge site, though. */        
int alg(int n){
    int cycle=1;

    while(n>1){
        if(n==1){
            cycle++;
            return cycle;
        }
        else if((n%2)>0 ){//check for odd
            n=(3*n)+1;
            cycle++;
        }
        else{
            n=n/2;
            cycle++;
        }
    }
    return cycle;
}

/* @func: max_cyc_len()
   @para: int i, int j
   @comm: determines the max cycle length for the 3n+1 algorithm for a
          given range [i,j]. */
int max_cyc_len(int i, int j){
    int n=i;
    int max_cyc=1;
    int cyc_len;
    while(n<=j){
        cyc_len=alg(n);
        if(cyc_len>max_cyc)
            max_cyc=cyc_len;
        n++;
    }
    return max_cyc;
}

int main(){
    int iter=0;
    int i, j, max;
    ifstream infile;
    infile.open("infile.txt");

    infile>>i;
    infile>>j;
    while(infile){
        max=max_cyc_len(i,j);
        cout<<i<<" "<<j<<" "<<max<<endl;
        infile>>i;
        infile>>j;
    }
    infile.close();
    return 0;
}