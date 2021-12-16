#include <iostream>

using namespace std;

void Area(double size)
{
    cout<<"\nArea(size) exec = "<<size;
}

int Area(int len, int wid =2)
{
    cout<<"\nArea(len, wid) exec = "<<len * wid;
}

int main()
{
    cout<<"\nchecking...";
    Area(12);
    Area(2.0324);
}