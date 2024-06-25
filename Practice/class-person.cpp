#include<iostream>
#include <stdio.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    float weight;
    string browser;
    person (string abrowser){
        browser = abrowser;
    }
};
class student{
    public:
    int id;
    char grade;
};
class employee{
    public:
    int salary;
    int creditscore;
};

int main()
{
    
    person Abc("google");
    Abc.age = 20;
    cout<<"browser"<<endl;
    return 0;
}












