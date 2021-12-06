#include <iostream>
 
using namespace std;
 
class Distance 
{
    public:
        int feet, inch;
        Distance(int f, int i)
        {
            this->feet = f;
            this->inch = i;
        }
        void operator-()
        {
            feet--;
            inch--;
            cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
        }

        void operator+()
        {
            feet++;
            inch++;
            cout << "\nFeet & Inches(Incriment): " << feet << "'" << inch;
        }
};

int main()
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)|";
    cout<<"\n|------------------------------|";
    cout<<"\n| Unary Operator Overloading   |";
    cout<<"\n|------------------------------|"<<endl;

    Distance d1(9, 5);
    -d1;
    -d1;
    +d1;
}