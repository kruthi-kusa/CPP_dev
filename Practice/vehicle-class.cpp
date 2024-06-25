#include <stdio.h>
#include<iostream>
using namespace std;
class vehicle{
    public:
        int speed;
        string model;
        int number;
        vehicle(int aspeed, string amodel){
           speed=aspeed;
           model=amodel;
        }
};

 
int main(){
    vehicle v1(12, "avdvd");
    v1.number = 1;
    cout<<v1.speed<<endl;
    cout<<v1.number<<endl;
    

}