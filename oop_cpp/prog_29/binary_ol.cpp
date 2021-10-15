#include <iostream>
#include <unistd.h>
#include <string.h>

using namespace std;

class Marks
{
	private: 
	    int value;
        char name[30];

	public:     
	    Marks()
	    { 
            value = 0;
        }

	    Marks(int c, char input[])
	    { 
            value = c;
            strcpy(name,input);
        }      

	    friend Marks operator+(Marks &S1, Marks &S2);
        
	    void printValue()
	    {
            cout<<name<<" ";
	    	cout<<"mark is is : "<<value<<endl;
	    }
};

Marks operator+(Marks &S1, Marks &S2)
{
	Marks S;
	S.value = S1.value+S2.value;
    strcpy(S.name,"Total");       
	return S;
}

int main()
{
	// Enter marks here
	
	Marks S1(100,"Maths");
	Marks S2(200,"English");       
	Marks S3;

    system("clear");

    cout<<"\n| Suchinton (A2345920063)                                                            |";
    cout<<"\n|------------------------------------------------------------------------------------|";
    cout<<"\n| Binary operator overloading using member function and non member (friend function) |";
    cout<<"\n|------------------------------------------------------------------------------------|\n"<<endl;

	S3 = S1 + S2;

	S1.printValue();

	S2.printValue();

	S3.printValue();
}