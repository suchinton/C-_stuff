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
            cout<<"today: "<<today<<"\ttomorrow: "<<tmrw;
        }
}ob;

char dates::today[11]={"15/09/2021"};
char dates::tmrw[11]={"16/09/2021"}; 

int main()
{
    dates::print();
}