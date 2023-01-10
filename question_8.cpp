//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
float area(float);
float area(float,float);
float area(float,double);
int main()
{
    float radius,length,breadth,base;
    double height;
    cout<<"Enter radius of a circle: "<<endl;
    cin>>radius;
    cout<<"Enter length and breadth of a rectangle : "<<endl;
    cin>>length>>breadth;
    cout<<"Enter base and height of a triangle:"<<endl;
    cin>>base>>height;
    cout<<"Area of circle = "<<area(radius)<<endl;
    cout<<"Area of Rectangle = "<<area(length,breadth)<<endl;
    cout<<"Area of Triangle= "<<area(base,height);
}
float area(float radius)
{
    return 3.14*radius*radius;
}
float area(float l,float b)
{
    return l*b;
}
float area(float b,double h)
{
    return (b*h)/2.0;
}
