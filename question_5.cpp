//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int Fibonacci(int);
int main()
{
   int x,value;
   bool flag=false;
   cout<<"Enter number:\n";
   cin>>x;
  for(int i = 1; ;i++)
  {
      value=Fibonacci(i);
      if(x==value)
      {
         flag =true;
      }
      if(value>x)
      {
         break;
      }
  }
  if(flag==true)
  {
     cout<<x<<" is in Fibonacci series";
  }
  else
  {
   cout<<x<<" is not in Fibonacci series";
  }
   cin.get();
   return 0;
}
int Fibonacci(int x)
{
   int t1,t2,t3;
   t1=t2=1;
   if(x<=2)
   {
      return 1;
   }
   for(int i=3;i<=x;i++)
   {
      t3=t1+t2; //2
      t1=t2;//1
      t2=t3;//2
   }
   return t2;
}