#include<iostream>
using namespace std;


class complex{
    int a,b;
    public:
    complex(int,int); //constructor declaration

     void printnumber(void){
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(int x,int y){
    a=x;
    b=y;
}

int main(){
    complex a(4,6);
    complex b= complex(9,7);
    a.printnumber();
    b.printnumber();
    return 0;
}