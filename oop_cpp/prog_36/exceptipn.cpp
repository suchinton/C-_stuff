#include <iostream>

using namespace std;

void last();
void third();
void first();
void second();

void last()
{
    cout<<"last :: begin\n";
    cout<<"last :: throw int exception\n";
    throw -1;
    cout<<"last :: end\n";
}

void second()
{
    cout<<"second :: begin\n";
    try
    {
        third();
    }
    catch (double)
    {
        cout<<"second :: catch double exception\n";
    }
    cout<<"second :: end\n";
}

void third()
{
    cout<<"third :: begin\n";
    last();
    cout<<"third :: end\n";
}

void first()
{
    cout<<"first :: begin\n";
    try
    {
        second();
    }
    catch(int)
    {
        cout<<"first :: catch int exception\n";
    }
    catch (double)
    {
        cout<<"first :: catch double exception\n";
    }
    cout<<"first :: end\n";
}

int main()
{
    cout<<"main :: begin\n";
    try
    {
        first();
    }
    catch(int a)
    {
        cout<<"main :: catch int exception\n";
    }
    cout<<"main :: end\n";
    return 0;
}
