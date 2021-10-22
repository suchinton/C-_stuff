#include <iostream>
using namespace std;

class box 
{
    private:
        int length;
        int* breadth;
        int height;
    
    public:
        box()
        {
            breadth = new int;
        }

        void set_dimension(int len, int brea,
                           int heig)
        {
            length = len;
            *breadth = brea;
            height = heig;
        }

        void show_data()
        {
            cout << "Length = " << length
                 << "\nBreadth = " << *breadth
                 << "\nHeight = " << height
                 << endl;
        }

        box(box& sample)
        {
            length = sample.length;
            breadth = new int;
            *breadth = *(sample.breadth);
            height = sample.height;
        }

        ~box()
        {
            delete breadth;
        }
};

int main()
{
    box first;

    system("clear");

    cout<<"\n| Suchinton (A2345920063)                |";
    cout<<"\n|----------------------------------------|";
    cout<<"\n| WAP to implement Deep Copy Constructor |";
    cout<<"\n|----------------------------------------|\n"<<endl;

    cout<<"\nDimensions of box 1 : \n";
    first.set_dimension(33, 2, 7);
    first.show_data();

    box second = first;

    cout<<"\nDimensions of box 2(copied) : \n";
    second.show_data();
}