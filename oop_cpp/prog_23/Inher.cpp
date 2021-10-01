#include <iostream>
#include <unistd.h>

using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void get_no(int n)
        {
            roll_no = n;
        }
        void put_no(void)
        {
            cout<<"\nRoll number: "<<roll_no<<endl;
        }
};

class test : virtual public student
{
    protected:
        float part1,part2;
    public:
        void get_marks(float x, float y)
        {
            part1 = x;
            part2 = y;
        }
        void put_marks(void)
        {
            cout<<"\nMarks Obtained :";
            cout<<"\nPart 1 : "<<part1;
            cout<<"\nPart 2 : "<<part2;
        }
};

class sports : public virtual student
{
    protected:
        float score;
    public:
        void get_score(float s)
        {
            score = s;
        }
        void put_score(void)
        {
            cout<<"\nSports wt : "<<score;
        }
};

class result : public test, public sports
{
        float total;
    public:
        void display(void);
};

void result :: display(void)
{
    total = part1 + part2 + score;
    
    put_no();
    put_marks();
    put_score();

    cout<<"\nToatal marks : "<<total<<endl;
}

int main()
{
    result std_1;
    int roll_no;
    float score, mark1, mark2;
    system ("clear");

    cout<<"\n| Suchinton (A2345920063)        |";
    cout<<"\n|--------------------------------|";
    cout<<"\n| Prog. to impliment inheritance |";
    cout<<"\n|--------------------------------|"<<endl;   

    cout<<"\nEnter Student roll no : ";
    cin>>roll_no;
    std_1.get_no(roll_no);
    cout<<"mark 1 : ";
    cin>>mark1;
    cout<<"mark 2 : ";
    cin>>mark2;
    std_1.get_marks(mark1,mark2);
    cout<<"Score : ";
    cin>>score;
    std_1.get_score(score);
    std_1.display();
}