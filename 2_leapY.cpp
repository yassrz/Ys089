#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"enter a number: ";
    cin>>year;

    if(year%4==0)
       cout<<year<<" is a leap year.";
    else
       cout<<year<<" is not a leap year.";
    return 0;   

}