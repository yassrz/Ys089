#include<iostream>
using namespace std;
float area(float rdius);

int main()
{
    float rdius;
    cout<<"enter the radius: ";
    cin>>rdius;
    area( rdius);

    //cout<<"\nthe area of the circle: "<<area(rdius);    
    return 0;
}
 float area(float rdius)
 {
    cout<<"the area of the circle is "<<3.14*rdius*rdius<<endl;
 }
