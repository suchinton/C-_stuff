#include <iostream>
#include <string>

using namespace std;

template <class T>

class mydata
{
    public:
        T a,b;
        T mydata()
        {
            a = 0;
            b = 0;
        }
        T get_mydata (T first, T second)
        {
            a = first;
            b = second;
        }
        T max_of_2()
        {
            return (a>b? a:b);
        }
};

int main()
{
    mydata <string> name;
    mydata <int> age;
    mydata <float> height;
    string name1, name2;
    int age1, age2;
    float h1,h2;

    cout<<"\n Enter 1st person details ";

    cout<<"\n1) names : ";
    getline(cin,name1);
    cout<<"2) Age     : ";
    cin>>age1;
    cout<<"3) Height  : ";
    cin>>h1;

    cout<<"\n Enter 2nd person details ";

    cout<<"\n1) names : ";
    getline(cin,name2);
    cout<<"2) Age     : ";
    cin>>age2;
    cout<<"3) Height  : ";
    cin>>h2;

    
    name.get_mydata(name1, name2);
    cout<<"\nLonger name is : "<<name.max_of_2();
    
    age.get_mydata(age1, age2);
    cout<<"\nOlder is       : "<<age.max_of_2();

    height.get_mydata(h1,h2);
    
}