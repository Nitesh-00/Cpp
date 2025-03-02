#include<iostream>
#include <cmath>
using namespace std;

class Point{
    int x;
    int y;
    public:
        Point(int a, int b);
        friend void distance(Point o1, Point o2);
        
};

Point :: Point(int a, int b){
    x = a;
    y = b;
}

void distance(Point o1, Point o2){
    float dis = sqrt(pow((o2.x - o1.x),2)+pow((o2.y - o1.y),2));
    cout<<"Distance between q and q is "<<dis<<endl;  
}

int main(){
    Point p(4,2);
    Point q(4,2);
    distance(p,q);
    return 0;
}