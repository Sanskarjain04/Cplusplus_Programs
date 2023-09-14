#include<iostream>
using namespace std;

//this will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

//call by reference using pointers
void swapPointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//call by reference using reference variable
void swapreferencevar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


int main(){
    int num1=4, num2=5;
    cout<<num1<<num2<<endl;
    // swap(num1,num2);
    swapreferencevar(num1,num2);
    // swapPointer(&num1,&num2);
    // cout<<num1<<num2<<endl;
    cout<<num1<<num2<<endl;
    return 0;
}