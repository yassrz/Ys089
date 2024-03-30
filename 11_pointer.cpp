#include<iostream>
using namespace std;
int main()
{
    int num=21;
    int *b=&num;
    
    cout<<num<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<&num<<endl;
    //Aqscout<<*num<<endl;
    return 0;
}