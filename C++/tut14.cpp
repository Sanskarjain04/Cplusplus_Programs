#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int Eid;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice;  //4
    char car;  //1
    float pounds; //4
};


int main(){
    // enum meal{breakfast,lunch,dinner};
    // meal m1=breakfast;
    // cout<<m1<<endl;
     union money m1;
     m1.rice=4;
    //  m1.car='h';
    //  cout<<m1.car<<endl;
     cout<<m1.rice<<endl;

    // struct employee prince;
    // ep sanskar;
    // prince.Eid=1;
    // prince.favchar='s';
    // prince.salary=938492.43;
    // cout<<prince.salary<<endl;
    // cout<<prince.favchar<<endl;
    // cout<<prince.Eid<<endl;
    return 0;
}