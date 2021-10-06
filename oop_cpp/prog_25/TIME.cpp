#include <iostream>
#include <unistd.h>
 
using namespace std;
 
class TIME
{
public:
	TIME();
	TIME(int s, int m, int h);
	void Display() const;
	void Add(TIME T);
private:
	int sec;
	int hrs;
	int min;
	const int INIT = 0;
};
 
TIME::TIME()
{
	sec = INIT;
	min = INIT;
	hrs = INIT;
}
 
TIME::TIME(int h, int m, int s)
{
	if (s < 0) sec = 0;
	else sec = s % 60;
	if (m < 0) m = 0;
	else min = m % 60;
	if (h < 0) h = 0;
	else hrs = h % 24;
}
 
void TIME::Display() const
{
	cout << hrs / 10 << hrs % 10 << ":" << min / 10 << min % 10 << ":" << sec / 10 << sec % 10 << endl;
}
 
void TIME::Add(TIME T)
{
	hrs = (hrs + T.hrs + ((sec + T.sec) / 60 + min + T.min) / 60) % 24;
	min = ((sec + T.sec) / 60 + min + T.min) % 60;
	sec = (sec + T.sec) % 60;	
}
 
int main()
{
    system ("clear");
    
    cout<<"\n| Suchinton (A2345920063)               |";
    cout<<"\n|---------------------------------------|";
    cout<<"\n| Prog. to Disp. TIME using inheritance |";
    cout<<"\n|---------------------------------------|"<<endl;   

	TIME t1;
	TIME t2(1, 30, 60);
	cout << "\nT1 object: ";
	t1.Display();
	cout << "T2 object: ";
	t2.Display();
	t1.Add(t2);
	cout << "T1 add T2: ";
	t1.Display();
}