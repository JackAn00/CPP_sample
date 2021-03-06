#include<iostream>
#include<cmath>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    Point();
    Point(double x ,double y);
    void setXY(double x,double y);
    double getX();
    double getY();
    ~Point();

};

class Circle{
private:
    double x;
    double y;
    double r;
public:
    Circle(double x,double y,double r);
    ~Circle();
    void  isContain(double x0, double y0);
};

Point::Point(){}

Point::Point(double x,double y){
    Point::x=x;
    Point::y=y;
}

void Point::setXY(double x,double y){
    Point::x=x;
    Point::y=y;
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

Point::~Point(){
    cout<<"point clear"<<endl;
}

Circle::Circle(double x,double y,double r){
    Circle::x=x;
    Circle::y=y;
    Circle::r=r;
}

Circle::~Circle(){
    cout<<"circle clear"<<endl;
}

void Circle::isContain(double x0, double y0){
    double d=sqrt(pow((x0-x),2)+pow((y0-y),2));
   if(d<r){
       cout<<"in"<<endl;
   } else {
       cout<<"out"<<endl;
   }
}


int main(){
    int x1,y1;
    cin>>x1>>y1;
    Point p1(x1,y1);
    int n;
    cin>>n;
    Point *p=new Point[n];
    for(int i=0;i<n;i++){
        int tx,ty;
        cin>>tx>>ty;
        p[i].setXY(tx,ty);
    }
    int x2,y2,r;
    cin>>x2>>y2>>r;
    Circle c(x2,y2,r);
    c.isContain(p1.getX(),p1.getY());
    for(int i=0;i<n;i++) {
        c.isContain(p[i].getX(), p[i].getY());
    }

    return 0;
}
