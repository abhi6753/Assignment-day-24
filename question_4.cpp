//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
void printPascal(int);
int fact(int x)
{
    if(x<=0)
     return 1;
    int fact =1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
int comb(int n,int r)
{
    int com = fact(n)/(fact(r)*fact(n-r));
    return com;
}
int main()
{
    int n;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=i;
            if(j==0)
            while(k<n)
            {
               cout<<" ";
               k++;
            }
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
    cin.get();
    return 0;
}
