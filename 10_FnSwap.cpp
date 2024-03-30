#include<iostream>
using namespace std;

void swap(int &a, int &b);//functiion declaration or function prototype
/*{
    int temp;
    temp=a;
    a=b;
    b=temp;
}*/
int main()
{
    int x,y;
    x=4,y=5;
    swap(x,y);
    cout<<x<<endl;
    cout<<y;
    return 0;
}
void swap(int &a, int &b)//function definition
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}