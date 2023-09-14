#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class point;

class disbet{
    public:
    int pointdistance(point,point);
};

class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
    friend class disbet;
};

int disbet :: pointdistance(point p,point q){
        cout<<"The distance between points is "<<sqrt((p.x-q.x)^2+(p.y-q.y)^2)<<endl;
    }

int main(){
    point p(5,6);
    p.displaypoint();
    point q(3,4);
    q.displaypoint();
    disbet rad;
    int dist=rad.pointdistance(p,q);
    return 0;
}