#include<iostream>
using namespace std;
int max( int, int, int);

int main()
{
    int num1,num2,num3;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    max(num1, num2, num3);
    return 0;
}
int max(int a, int b, int c)
{
    if( (a>b)&&(a>c))
    { cout<<"\nThe greatest integer is: "<<a<<endl;
    }
    else if((b>a)&&(b>c))
    {
        cout<<"\nThe greatest integer is: "<<b<<endl;

    }
    else
    {
        cout<<"\nThe greatest integer is: "<<c<<endl;
    } 
    return 0;
}