#include<iostream>
using namespace std;

class employee
{
    private:
      int id;
      string name;
      int salary;
    public:
       employee(int i, string n, int s) 
       {
        id=i;
        name=n;
        salary=s;
       } 
       void getData();
      /* void getData()
       {
        cout<<"the employee id has: "<<id<<endl;
        cout<<"his name is: "<<name<<endl;
        cout<<"he gets a salary of "<<salary;
       }*/
};
void employee::getData(){
  cout<<"the employee id has: "<<id<<endl;
  cout<<"his name is: "<<name<<endl;
  cout<<"he gets a salary of "<<salary<<endl;
}
int main()
{
    employee rsi(204,"packard",1000);
    rsi.getData();
    return 0;
}