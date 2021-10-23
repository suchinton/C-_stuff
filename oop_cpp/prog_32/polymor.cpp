#include <iostream>
#include <unistd.h>
#include <string.h>

using namespace std;

class laptop
{
    public:
        float price;
        char model[30];
        laptop()
            {
                this ->price= 0.0;
                strcpy(model,"N.A.");

                cout<<"\n\nLaptop (Base class) : ";
                cout<<"\nModel : "<<model;
                cout<<"\nPrice : ₹ "<<price<<"/-";
            }

        virtual void set_price()=0;
        virtual void set_model()=0;
        virtual void show()=0;
};

class dell : public laptop
{
    public:
        void set_price()
        {
            price = 21000.90;
        }
        
        void set_model()
        {
            strcpy(model,"XM40Q11");
        }

        void show()
        {
            cout<<"\n\nDELL Laptop : \n";
            cout<<"\nModel : "<<model;
            cout<<"\nPrice : ₹ "<<price<<"/-";
        }
};

class lenovo : public laptop
{
    public:
        void set_price()
        {
            price = 45000.90;
        }
        
        void set_model()
        {
            strcpy(model,"F40D112");
        }
        
        void show()
        {
            cout<<"\n\nLenovo Laptop : \n";
            cout<<"\nModel : "<<model;
            cout<<"\nPrice : ₹ "<<price<<"/-";
        }
};

int main()
{
    

    system("clear");

    cout<<"\n| Suchinton (A2345920063)  45000.90                         |";
    cout<<"\n|---------------------------------------------------|";
    cout<<"\n| Do implement the concept of Run Time polymorphism |";
    cout<<"\n|---------------------------------------------------|\n"<<endl;

    laptop *l = new dell();
    l ->set_price();
    l ->set_model();
    l ->show();

    l = new lenovo();
    l ->set_price();
    l ->set_model();
    l ->show();

}