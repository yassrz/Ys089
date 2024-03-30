#include<iostream>
using namespace std;

int main()
{
    int mrks[] = {75,67,56,78};
    // cout<<mrks[0]<<endl;
    // cout<<mrks[2]<<endl;
    // int mathmark=mrks[1];
    // cout<<mathmark<<endl;
    int i=0;
    while(i<4)
    {
        cout<<"the value of marks "<<i<<" is "<<mrks[i]<<endl;
        i++;
    }
    return 0;
}