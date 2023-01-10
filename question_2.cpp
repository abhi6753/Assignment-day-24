//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int maxDigit(int);
int main()
{
   int num;
   cout<<"Enter number:"<<endl;
   cin>>num;
   int max= maxDigit(num);
   cout<<"Maximum digit = "<<max;
}
int maxDigit(int num)
{
  int max;
  max = num%10;
  while(num!=0)
  {
    if(max<num%10)
    {
      max = num%10;
    }
    num/=10;
  }
   return max;
}