#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo=9;
    glo=78;
    //int a=4;
    //int b=5;
    int a=14, b=15;
    float pi=3.14;
    bool f=true;
    bool h=false;
    char c='g';
    sum();
    //the bool value gives output 1 if true and 0 if false.
    cout<<glo<<f<<h;
    // cout<<"this is tutorial 4,i am watching this on 15th april.\n Here is the value of a:"<<a<<"\n The value of b:"<<b;
    // cout<<"\n the value of pi is:"<<pi;
    // cout<<"\n the value of c is:"<<c;
    return 0;
}