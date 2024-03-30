#include<iostream>
using namespace std;

class car
{
    private:
      string name;
      string type;
      int yom;
      string colour;
    public:
      car(string n,string t, int y,string c)
      {
         name=n;
         type=t;
         yom=y;
         colour=c;
      }  
      void display()
      {
        cout<<name<<" "<<type<<" "<<yom<<" "<<colour<<endl;
      }

      friend void newestKid()
      {
        cout<<"yunx is the newest model"<<endl;
      }
};
int main()
{
    car iio("iio","suv",2013,"black");
    iio.display();

    car yunx("yunx","apach",2018,"green");
    yunx.display();
    //newestKid();
    return 0;
}