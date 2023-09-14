#include<iostream>
using namespace std;

int main(){
    int marks[]={12,13,14,15};
    int mathmarks[4];    
    mathmarks[0]=232;
    mathmarks[1]=236;
    mathmarks[2]=237;
    mathmarks[3]=234;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<marks[0]<<endl;
    // marks[1]=18;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
     for ( int i = 0; i < 4; i++)
     {
         /* code */
         cout<<marks[i]<<endl;
         cout<<mathmarks[i]<<endl;
     }
     int* p=marks;
      cout<<*(p++)<<endl;
      cout<<*p;
    //  cout<<*p<<endl;
    //  cout<<*(p+1)<<endl;
    //  cout<<*(p+2)<<endl;
    //  cout<<*(p+3)<<endl;
    
    return 0;
}