#include <stdio.h>
#include<iostream>
using namespace std;
 int main(){
     
     int a=1,n,m;
     cout<<"enter the value of n: "<<endl;
     cin>>n;
     cout<<"enter the value of m: "<<endl;
     cin>>m;
     if(m==0){
         a=1;
     }else{
         for(int i=0; i<m; i++){
            a=a*n;
         }
     }
     cout<<a<<endl;
     return 0;
 }
