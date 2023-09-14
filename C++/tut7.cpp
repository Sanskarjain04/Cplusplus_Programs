#include<iostream>
using namespace std;

int c=45;

int main(){
    // int a,b,c;
    // cout<<"the value of a is:"<<endl;
    // cin>>a;
    // cout<<"the value of a is:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the value of c is:"<<c<<endl;
    // cout<<"the value of c is:"<<::c;
    //if we do not specify the datatype of the value then by defaylt it takes double data type


    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4L)<<endl;

    // *************Reference Variables************
    // float x=45;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting************
    int a = 45;
    float b=45.45;
    cout<<"The value of a is:"<<(float)a<<endl;
    cout<<"The value of b is:"<<(int)b<<endl;

    int c=int(b);

    cout<<"The expression is:"<<a+b<<endl;
    cout<<"The expression is:"<<a+(int)b<<endl;
    cout<<"The expression is:"<<a+int(b);
    
    return 0;
}