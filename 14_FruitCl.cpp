#include<iostream>
using namespace std;


class Fruit 
{
    private:
       string name;
       string colour;
       int price;
    public:
       Fruit(string n, string c, int p){
        name=n;
        colour=c;
        price=p;
       } 
    void ShowDetails()
    {
        cout<<name<<" is the name of the friut. \n"<<colour<<" is the colour. "<<endl<<price<<"rs is the price."<<endl;
    }    
};
int main()
{
    Fruit mango ("Mango","Yellow",100);

    //mango.name="Mango";
    //mango.colour="Yellow";
    //mango.price=50;
    mango.ShowDetails();
    cout<<endl;

    Fruit orange ("Orange","orange",100);
    orange.ShowDetails();
    cout<<endl;
    Fruit kela ("Banana","yellow",120);
    kela.ShowDetails();

   /*Fruit orange;
    orange.name="Orange";
    orange.colour="Orange";
    orange.price=100;

    cout<<"Name      colour      price/kg "<<endl<<endl;
    cout<<mango.name<<"     "<<mango.colour<<"      "<<mango.price<<endl;
    cout<<orange.name<<"    "<<orange.colour<<"      "<<orange.price<<endl;

    //cout<<"name of the fruit is "<<mango.name<<endl;
    //cout<<"colour of the fruit is "<<mango.colour<<endl;
    //cout<<"price of the fruit is "<<mango.price<<endl;*/
    return 0;
}