#pragma once
#include<vector>
#include<cmath>
#include<iostream>
using namespace std;

struct Missile{
    int x;
    int y;
};
class Kingdom{
    private:
        int size;
        double area;
        struct Site{
            int x_coord;
            int y_coord;
        };
        vector<Site> sites;
        Site pwr_stat;
        
    public:
        Kingdom(){
            
        }
        void setSize(int n){
            size=n;
        }
        void getSize(){
            cout<<"the kingdom has "<<size<<" sites\n";
        }

        void setPwrStat(int x, int y){
            pwr_stat.x_coord=x;
            pwr_stat.y_coord=y;
            sites.push_back(pwr_stat);
        }

        void getPwrStat(){
            cout<<"The power station is at ("<<pwr_stat.x_coord<<", "<<pwr_stat.y_coord<<")\n";
        }

        void setHouses(int x, int y){
            Site h;
            h.x_coord=x;
            h.y_coord=y;
            sites.push_back(h);
        }
        void getSites(){
            for(int i=0; i<size-1; i++){
                cout<<"("<<sites[i].x_coord<<", "<<sites[i].y_coord<<")\n";
            }
        }

        double kgdm_area(){
            area=(pwr_stat.x_coord-pwr_stat.y_coord)-((pwr_stat.x_coord*pwr_stat.y_coord)-1);
            for(int i=0; i<size; i++){
                area+=(sites[0].x_coord-sites[0].y_coord)-((sites[0].x_coord*sites[0].y_coord)-1);
            }
            area=abs(area/2);
            return area;
        }
       
        ~Kingdom(){

        }
};
