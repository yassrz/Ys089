#include<iostream>
using namespace std;

int main()
{
    int num,remd,reversedNum=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        remd = num%10;
        reversedNum = reversedNum*10 + remd;
        num /=10;
    } 
    cout<<"Reversed number: "<<reversedNum<<endl;

    return 0;
       

}