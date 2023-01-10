//3. Define a function to calculate x raised to the power y
#include<iostream>
using namespace std;
int power(int x,int y);
int main()
{
   int x,y;
   cout<<"Enter base: ";
   cin>>x;
   cout<<"Enter power: ";
   cin>>y;
   cout<<power(x,y);
   cin.get();
   return 0;
}
int power(int x,int y)
{
   int power=1;
   for(int i=0;i<y;i++)
      power *= x;
   return power;
}