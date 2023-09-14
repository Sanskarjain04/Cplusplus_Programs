#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    //changing the value of a
    // int a=45;
    // cout<<"the value of a was:"<<a<<endl;
    // a=35;
    // cout<<"the value of a is:"<<a<<endl;
    //******constants*******
    // const int a=5;
    // cout<<"the value of a is:"<<a<<endl;
    //if we assign a different value to a now then it wil give error
    // int a=7;
    //cout<<"the value of a is:"<<a<<endl;

    //**********Manipulators************
    // int a=5,b=35,c=2643;
    // cout<<"the value of a without setw is:"<<a<<endl;
    // cout<<"the value of a without setw is:"<<b<<endl;
    // cout<<"the value of a without setw is:"<<c<<endl;

    // cout<<"the value of a with setw is:"<<setw(4)<<a<<endl;
    // cout<<"the value of a with setw is:"<<setw(4)<<b<<endl;
    // cout<<"the value of a with setw is:"<<setw(4)<<c<<endl;

    //************operator precedence**************
    int a=4 , b=5;
    int c=((((a*5)+b)+35)-12);
    cout<<c;
    return 0;
}