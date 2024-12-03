#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

vector<int> rank_vect;
int n, diff, x, score=1, iter=1, j, count=1;
bool flag=false;
vector <int> used, sequ_len;

// @func: find()
// @para: int num
// @comm: finds a value in used[].
bool find(int num){
    for(int i=0;i<n;i++){
        if(used[i]==num){
            flag=true;
            return flag;
        }
    }
    flag=false;
    return flag;
}

// @func: addto_used()
// @para: int num
// @comm: adds a value to used[] vector.
void addto_used(int num){
    int a=1;
    if (used[0]==0)
        used[0]=num;
    else{
        while(used[a]==0){
            a++;
        }
        used[a]=num;
    }
}

// @func: addto_sequ_len()
// @para: int num
// @comm: adds a value to sequ_len[] vector.
void addto_sequ_len(int num){
    int a=0;
    while(sequ_len[a]==0){
        a++;
    }
    sequ_len[a]=num;
}

int main(){
    ifstream infile;
    infile.open("rankings.txt");

    infile>>n;
    rank_vect.resize(n);
    used.resize(n);
    sequ_len.resize(n);
    infile>>x;
    for(int i=0; i<n; i++){
        used[i]=0;
        sequ_len[i]=0;
    }
    for(int i=0; i<n; i++){
        rank_vect[i]=x;
        infile>>x;
    }
    // used[0]=4;
    // used[1]=7;
    // used[2]=10;
    // score=3;
    // count=iter=5;
        while(count!=n){
            diff=rank_vect[iter-1]-rank_vect[iter];
            if(diff<0){//diff<--ve
                used[iter-1]=rank_vect[iter-1];
                score++; count++; iter++;
            }
            else if(diff>0){
                used[iter-1]=rank_vect[iter-1];
                j=iter+1;
                while(diff>0){
                    diff=rank_vect[iter-1]-rank_vect[j];
                    j++;
                }
                used[iter]=rank_vect[j];
                score++; count=iter=j+1;
            }
        }
        for(int l=0;l<n;l++){
            cout<<sequ_len[l]<<" "<<used[l]<<"\n";
        }
    
    infile.close();
    return 0;
}