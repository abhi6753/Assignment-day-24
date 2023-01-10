//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    int a,b,c,sum=0;
    char ch;
    cout<<"Enter two number to add them : "<<endl;
    cin>>a>>b;
    ch: cout<<"Do you want to add 1 more number\nIf YES then press 'y' else 'N': ";
    cin>>ch;
    switch(ch)
    {
        case 'Y':
        case 'y':
            cout<<"Enter third number : "<<endl;
            cin>>c;
            sum = add(a,b,c);
        break;
        case 'N':
        case 'n':
            sum = add(a,b);
           break;
        default:
        cout<<"Please choose correct option!!\n";
        goto ch;
    }
    cout<<"Sum = "<<sum;
    cin.get();
    return 0;
}