#include<iostream>
using namespace std;

int main(){
    int a=6;
    int* b= &a;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;

    int** c=&b;
    cout<<"Address of c is:"<<&c<<endl;
    cout<<"Address of b is:"<<c<<endl;
    cout<<"Address of a is:"<<*c<<endl;
    cout<<"Value at a is:"<<**c<<endl;
    return 0;
}