#include <iostream>
using namespace std;

class student
{
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam :: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam :: get_marks(void){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
}
class result: public exam{
    float percentage;
    public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<endl;
    }
};
int main()
{
    result sanskar;
    sanskar.set_roll_number(243);
    sanskar.set_marks(85.0,82.0);
    sanskar.display_result();
    return 0;
}