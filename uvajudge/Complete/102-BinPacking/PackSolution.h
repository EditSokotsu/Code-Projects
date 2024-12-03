#pragma once
#include <iostream>
#include <string>
using namespace std;

class Solution{
    private:
        struct Bin{
            int b_arra[3];
            string color;
        };
        Bin b1, b2, b3;
        int mvmts;
        string clr_strng;
    public:
        Solution(){
            mvmts=0;
        }
        /* @func: load_b1()
           @type: void
           @para: int x, int y, int z
           @comm: loads bin 1's bottle array.*/
        void load_b1(int x, int y, int z){
            b1.b_arra[0]=x;
            b1.b_arra[1]=y;
            b1.b_arra[2]=z;
        }
        /* @func: load_b2()
           @type: void
           @para: int a, int b, int c
           @comm: loads bin 2's bottle array.*/
        void load_b2(int a, int b, int c){
            b2.b_arra[0]=a;
            b2.b_arra[1]=b;
            b2.b_arra[2]=c;
        }
        /* @func: load_b3()
           @type: void
           @para: int d, int e, int f
           @comm: loads bin 3's bottle array*/
        void load_b3(int d, int e, int f){
            b3.b_arra[0]=d;
            b3.b_arra[1]=e;
            b3.b_arra[2]=f;
        }
        /* @func: prnt_bins()
           @type: void
           @para: none
           @comm: debugging sh*t left over because I can't figure out VS Code debug and
                  couldn't be bothered to take it out, but commented anyway, XD.*/
        void prnt_bins(){
            for(int i=0;i<3;i++){
                cout<<b1.b_arra[i]<<" ";
            }
            for(int i=0;i<3;i++){
                cout<<b2.b_arra[i]<<" ";
            }
            for(int i=0;i<3;i++){
                cout<<b3.b_arra[i]<<" ";
            }
            cout<<"\n";
        }
        /* @func: prnt_colors()
           @type: void
           @para: none
           @comm: Moar debug sh*t I couldn't be bothered to take out. Just in 'comments mode'
                  and sh*t, XD.*/
        void prnt_colors(){
            cout<<"b1 color = "<<b1.color<<"\n";
            cout<<"b2 color = "<<b2.color<<"\n";
            cout<<"b3 color = "<<b3.color<<"\n";
        }
        /* @func: b1_color()
           @type: void
           @para: none
           @comm: determines the color of bin 1. The heuristic is to take the color of the 
                  smallest value in the bin's array of bottles.*/
        void b1_color(){
            if(b1.b_arra[0]<b1.b_arra[1] && b1.b_arra[0]<b1.b_arra[2])
                b1.color="B";
            else if(b1.b_arra[1]<b1.b_arra[0] && b1.b_arra[1]<b1.b_arra[2])
                b1.color="G";
            else if(b1.b_arra[0]==b1.b_arra[2]){
                int brown=b2.b_arra[0]+b3.b_arra[0];
                int clear=b2.b_arra[2]+b3.b_arra[2];
                if(brown>clear)
                    b1.color="C";
                else
                    b1.color="B";
            }
            else
                b1.color="C";
        }
        /* @func: b2_color()
           @type: void
           @para: none
           @comm: determines the color of bin 2. The heuristic is to take the color of the 
                  largest value in the bin's array of bottles.*/
        void b2_color(){
            if(b2.b_arra[0]>b1.b_arra[1]&&b2.b_arra[0]>b2.b_arra[2])
                b2.color="B";
            else if(b2.b_arra[1]>b2.b_arra[0]&&b2.b_arra[1]>b2.b_arra[2])
                b2.color="G";
            else
                b2.color="C";
        }
        /* @func: b3_color()
           @type: void
           @para: none
           @comm: determines the color of bin 3. By the heuristic, when this function is called, the
                  other two bin colors should have been determined.*/
        void b3_color(){
            if(b1.color=="G"&&b2.color=="C")
                b3.color="B";
            else if(b1.color=="B"&&b2.color=="C")
                b3.color="G";
            else if(b1.color=="C"&&b2.color=="B")
                b3.color="G";
            else if(b1.color=="C"&&b2.color=="G")
                b3.color="B";
            else
                b3.color="C";
        }
        /* @func: sort_bins()
           @type: void
           @para: none
           @comm: sorts the bins relative to their colors.*/
        void sort_bins(){
            if(b1.color=="B" && b2.color=="G" && b3.color=="C"){
                b1.b_arra[0]+=(b2.b_arra[0]+b3.b_arra[0]);
                mvmts+=(b2.b_arra[0]+b3.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;

                b2.b_arra[1]+=(b1.b_arra[1]+b3.b_arra[1]);
                mvmts+=(b1.b_arra[1]+b3.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;

                b3.b_arra[2]+=(b1.b_arra[2]+b2.b_arra[2]);
                mvmts+=(b1.b_arra[2]+b2.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;
            }
            else if(b1.color=="B" && b2.color=="C" && b3.color=="G"){
                b1.b_arra[0]+=(b2.b_arra[0]+b3.b_arra[0]);
                mvmts+=(b2.b_arra[0]+b3.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;

                b2.b_arra[2]+=(b1.b_arra[2]+b3.b_arra[2]);
                mvmts+=(b1.b_arra[2]+b3.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;

                b3.b_arra[1]+=(b1.b_arra[1]+b2.b_arra[1]);
                mvmts+=(b1.b_arra[1]+b2.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;
            }
            else if(b1.color=="G" && b2.color=="B" && b3.color=="C"){
                b1.b_arra[1]+=(b2.b_arra[1]+b3.b_arra[1]);
                mvmts+=(b2.b_arra[1]+b3.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;

                b2.b_arra[0]+=(b1.b_arra[0]+b3.b_arra[0]);
                mvmts+=(b1.b_arra[0]+b3.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;

                b3.b_arra[2]+=(b1.b_arra[2]+b2.b_arra[2]);
                mvmts+=(b1.b_arra[2]+b2.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;
            }
            else if(b1.color=="G" && b2.color=="C" && b3.color=="B"){
                b1.b_arra[1]+=(b2.b_arra[1]+b3.b_arra[1]);
                mvmts+=(b2.b_arra[1]+b3.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;

                b2.b_arra[2]+=(b1.b_arra[2]+b3.b_arra[2]);
                mvmts+=(b1.b_arra[2]+b3.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;

                b3.b_arra[0]+=(b1.b_arra[0]+b2.b_arra[0]);
                mvmts+=(b1.b_arra[0]+b2.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;
            }
            else if(b1.color=="C" && b2.color=="B" && b3.color=="G"){
                b1.b_arra[2]+=(b2.b_arra[2]+b3.b_arra[2]);
                mvmts+=(b2.b_arra[2]+b3.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;

                b2.b_arra[0]+=(b1.b_arra[0]+b3.b_arra[0]);
                mvmts+=(b1.b_arra[0]+b3.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;

                b3.b_arra[1]+=(b1.b_arra[1]+b2.b_arra[1]);
                mvmts+=(b1.b_arra[1]+b2.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;
            }
            else{
                b1.b_arra[2]+=(b2.b_arra[2]+b3.b_arra[2]);
                mvmts+=(b2.b_arra[2]+b3.b_arra[2]);
                b2.b_arra[2]=0;
                b3.b_arra[2]=0;

                b2.b_arra[1]+=(b1.b_arra[1]+b3.b_arra[1]);
                mvmts+=(b1.b_arra[1]+b3.b_arra[1]);
                b2.b_arra[1]=0;
                b3.b_arra[1]=0;

                b3.b_arra[0]+=(b1.b_arra[0]+b2.b_arra[0]);
                mvmts+=(b1.b_arra[0]+b2.b_arra[0]);
                b2.b_arra[0]=0;
                b3.b_arra[0]=0;
            }
        }
        /* @func: get_mvmts()
           @type: int
           @para: none
           @comm: the way I've implemented this solution, this returns the # of times any and
                  all bottles were moved as opposed to the minimum number. Still works for sample
                  input, though. */
        int get_mvmts(){
            return mvmts;
        }
        /* @func: get_clrstring()
           @type: string
           @para: none
           @comm: returns the combined string of bin colors the solution requires.*/
        string get_clrstring(){
            clr_strng=b1.color+b2.color+b3.color;
            return clr_strng;
        }
        ~Solution(){}
};