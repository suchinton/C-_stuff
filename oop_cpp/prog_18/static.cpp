#include <iostream>
#include <unistd.h>

using namespace std;

class dates
{
    private:
        static char today[11];
        static char tmrw[11];
    public:
        static void print()
        {
            cout<<"today: "<<today<<"\ntomorrow: "<<tmrw;
        }
}ob;

char dates::today[11]={"15/09/2021"};
char dates::tmrw[11]={"16/09/2021"}; 

int main()
{
    system("clear");

    cout<<"\n| Suchinton          (A2345920063)                     |";
    cout<<"\n|------------------------------------------------------|";
    cout<<"\n| Prog to display lowest & highest salaries of workers |";
    cout<<"\n|------------------------------------------------------|"<<endl;

    dates::print();
}