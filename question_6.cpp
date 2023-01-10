//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x,y;
    cout<<"Enter value of x and y"<<endl;
    cin>>x>>y;
    cout<<"Before Swapping:"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    swap(x,y);
    cout<<"After Swapping:"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cin.get();
    return 0;
}