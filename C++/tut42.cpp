#include<iostream>
using namespace std;

class simplecalculator{
    protected:
    int a;
    int b;
    public:
    int operation;
    void set_value(int p,int q){
        a=p;
        b=q;
    }
    void calculate(){
        cin>>operation;
        switch(operation){
            case 1:
            cout<<a+b;
            break;

            case 2:
            cout<<a-b;
            break;

            case 3:
            cout<<a*b;
            break;

            case 4:
            cout<<a/b;
            break;

        }
    }
};

int main(){
    simplecalculator sans;
    sans.set_value(5,6);
    sans.calculate();
    return 0;
}