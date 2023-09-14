#include<iostream>
using namespace std;

//this is tutorial 9
int main(){
     int age;
     cin>>age;

//     if((age<18) && (age>0)){
//         cout<<"you are not eligible for party";
//     }
//     else if(age>=18){
//         cout<<"you can come to party";
//     }
//     else if(age<1){
//         cout<<"you are not yet born";
//     }
switch (age)
{
case 18:
cout<<"you are 18";
    break;

case 22:
cout<<"you are 22";
    break;

case 34:
cout<<"you are 34";
    break;

default:
cout<<"no special cases"<<endl;
    break;
}
    return 0;
}