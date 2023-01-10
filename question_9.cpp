//9. Write functions using function overloading to find a maximum of two numbers and\
both the numbers can be integer or real.
#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter value of a and b :"<<endl;
    cin>>a>>b;
    cout<<"Enter value of x and y:"<<endl;
    cin>>x>>y;
    cout<<"Maximum in "<<a<<" and "<<b<<" is "<<max(a,b)<<endl;
    cout<<"Maximum in "<<x<<" and "<<y<<" is "<<max(x,y);

}
int max(int a,int b)
{
    return a>b?a:b;
}
float max(float x,float y)
{
    return x>y?x:y;
}

