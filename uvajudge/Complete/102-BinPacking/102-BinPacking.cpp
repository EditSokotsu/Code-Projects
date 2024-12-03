/* @proj: UVAjudge(BinPacking)
   @auth: EditSokotsu
   @stat: solved, not submitted
   @comm: This project implements the UVAjudge Bin Packing problem, a heuristic type problem. My heuristic:
          I decided to make bin 1 the color of the smallest # of bottles, bin 2 the color of the largest # 
          of bottles and bin 3 was whatever color remained, baring in mind the BCG placing of ever 3 ints in 
          the 9 int sequnece. So if 1 2 3 is the bin 1 entry, bin 1's color would be "B" (brown). I decided 
          that an OOP approach would make life easier; if you're a math guy (you probably don't need to look 
          at this then) you may take a different approach. I think there's room for improvement, I feel this 
          solution is kinda sloppy, but f*ck it, it works (for sample input anyway)...*/
#include"PackSolution.h"
#include<fstream>
using namespace std;

int main(){
    int l, m, n;
    ifstream infile;
    infile.open("bottles.txt");
    Solution mysol;
    
    while(!infile.eof()){
        infile>>l>>m>>n;
        mysol.load_b1(l,m,n);
        infile>>l>>m>>n;
        mysol.load_b2(l,m,n);
        infile>>l>>m>>n;
        mysol.load_b3(l,m,n);
    }
    mysol.b1_color();
    mysol.b2_color();
    mysol.b3_color();
    mysol.sort_bins();
    cout<<mysol.get_clrstring()<<" "<<mysol.get_mvmts()<<"\n";
    infile.close();
    return 0;
}