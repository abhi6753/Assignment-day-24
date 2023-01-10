//10. Write functions using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
int main()
{
    int a,b;
    float x ,y;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    cout<<"Enter value of x and y:"<<endl;
    cin>>x>>y;
    cout<<"sum of "<<x<<" and "<<y<<" is "<<sum(x,y)<<endl;
    cin.get();
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
float sum(float x,float y)
{
    return x+y;
}