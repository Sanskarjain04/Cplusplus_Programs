#include<iostream>
using namespace std;

int sum(int a,int b);
void g();

int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    // num1&num2 are actual parameters
    cout<<"the value of num1+num2 is:"<<sum(num1,num2)<<endl;
    g();
    return 0;
}
// formal parameters a and b will be taking values from num1 and num2
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"hello"<<endl;
}