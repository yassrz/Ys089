#include<iostream>
using namespace std;

int main()
{
    int num1;
    cout<<"enter a number: ";
    cin>>num1;

    for (int i = 0; i <= num1; i++)
    {
        cout<<"The numbers are: "<<i<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    switch(year)

    case(year%4==0):
     cout<<"it is a leap year.";
     break;
    default:
     cout<<"done";
     break;
    return 0;  

}*/