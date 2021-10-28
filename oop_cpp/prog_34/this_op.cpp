#include <iostream>
#include <string.h>

using namespace std;

class collections
{
    public:
        float money;
        char donation[30];
        char date[11];

        collections()
        {
            strcpy(this ->date, "12/12/2021");
        }

        void printdata()
        {
            cout<<"\nMoney         : "<<money;
            cout<<"\nDonation from : "<<donation;
            cout<<"\nDate          : "<<date;
        } 
};

int main()
{
    system("clear");

    cout<<"\n| Suchinton (A2345920063)    |";
    cout<<"\n|----------------------------|";
    cout<<"\n| To implement This operator |";
    cout<<"\n|----------------------------|"<<endl;

    collections ob;
    cout<<"\nDonation by : ";
    scanf("%s",ob.donation);
    cout<<"Amount : ";
    cin>>ob.money;
    ob.printdata();
}
