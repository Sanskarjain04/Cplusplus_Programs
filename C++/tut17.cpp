#include<iostream>
using namespace std;

inline int product(int a, int b){
    //Not recommeded to use be;ow lines with inline functions
    // static int c=0; //This executes only once
    // c=c+1;//Next time this function is run, the value of c will be returned
    return a*b;
}

float moneyreceived(int currentmoney,float factor=1.04){
    return currentmoney*factor;
}

int main(){
    int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    // cout<<"The product of a and b is:"<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have"<<money<<"rsi in your bank account,you will receive"<<moneyreceived(money)<<"after 1 year"<<endl;
    cout<<"For VIP,If you have"<<money<<"rsi in your bank account,you will receive"<<moneyreceived(money,1.1)<<"after 1 year"<<endl;
    return 0;
}