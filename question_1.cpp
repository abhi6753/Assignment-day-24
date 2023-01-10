//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
bool checkPrime(int);
int main()
{
  int num;
  bool b; // I used new primitive data type
  cout<<"Enter number to check prime or not: "<<endl;
  cin>>num;
 ;
  if(checkPrime(num))
    cout<<"Not Prime number"<<endl;
  else
    cout<<"Prime number"<<endl;
  cin.get();
  return 0;
}
bool checkPrime(int num)
{
  int flag=0;
  for(int i = 2;i<=num/2;i++)
  {
    if(num%i==0)
    {
      flag =1;
      break;
    }
  }
  return flag;
}