#include"Kingdom.h"
#include<fstream>
#include<vector>
using namespace std;

int main(){
    
    vector<Kingdom> k_vect;
    int sites, x , y;
    ifstream infile;
    infile.open("kgdmfile.txt");
    
    infile>>sites;
    while(sites!=-1){
        Kingdom k;
        k.setSize(sites);
        infile>>x>>y;
        k.setPwrStat(x,y);
        for(int i=0;i,sites-1;i++){
            infile>>x>>y;
            k.setHouses(x,y);
        }
        k_vect.push_back(k);
        infile>>sites;
    }
    /*for(int i=0; i<k_vect.size();i++){
        k_vect[i].getSites();
        k_vect[i].getPwrStat();
        k_vect[i].getSites();
        k_vect[i].area();
        cout<<endl;
    }*/
    
    
    infile.close();
    return 0;
}