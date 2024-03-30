#include<iostream>
using namespace std;
int main()
{
    for( int i=0; i<50; i++)
    {
        if(i%2 == 0)
          continue;
          cout<<i<<endl;  
        for( char it='a'; it<'g'; it++)
        {
         for(int i=0; i<15; i++)
          {
            if(i%3 == 0)
            continue;
            cout<<i<<endl;
          } 
        }   
    } 
    return 0;       
}