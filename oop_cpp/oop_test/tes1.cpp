#include <iostream>
#include <unistd.h>

using namespace std;

class learner
{
    private:   
        char full_name[30];
        int enr_no;
        int marks[5];
        int total_marks;
    public:
        int t_m =0;
        void get_data(void);
        void display(void);
        void sort_marks(void);
        void min_m(void);
        void max_m(void);
        void total_m(void);
        learner()
        {
            total_marks = 100;
        }
}stud;

void learner::get_data(void)
{
    cout<<"\nEnter full name (use _ for space) : ";
    cin>>full_name;
    cout<<"\nEnrollment no. : ";    
    cin>>enr_no;
    cout<<"\n\nEnter marks (out of 100):"<<endl;
    cout<<"\nMaths : ";            cin>>marks[0];
    cout<<"\nEnglish : ";          cin>>marks[1];
    cout<<"\nComputer Sc. : ";     cin>>marks[2];
    cout<<"\nPhysics : ";          cin>>marks[3];
    cout<<"\nChemistry : ";        cin>>marks[4];
}

void learner::display(void)
{
    cout<<"\n\nEntered details: "<<endl;
    cout<<"\n\nName: "<<full_name;
    cout<<"\nEnrollment no. : "<<enr_no;
    cout<<"\n\nEnter marks (out of 100):"<<endl;
    cout<<"\nMaths : "<<marks[0];
    cout<<"\nEnglish : "<<marks[1];
    cout<<"\nComputer Sc. : "<<marks[2];
    cout<<"\nPhysics : "<<marks[3];
    cout<<"\nChemistry : "<<marks[4]<<endl;
}

void learner::sort_marks(void)
{
    int i,j,temp;
    for (i=0; i < 5 ; i++)
        for(j=0; j < 5 - i ; j++)
        {
            if(marks[j] > marks[j+1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j+1] = temp;
            }
        }
}

void learner::min_m(void)
{
    cout<<"\nMinimum mark is : "<<marks[0]<<"/"<<total_marks;
}

void learner::max_m(void)
{
    cout<<"\nMaximum mark is : "<<marks[4]<<"/"<<total_marks;
}

void learner::total_m(void)
{
    for (int i=0; i<=5 ;i++)
        t_m = t_m + marks[i];
    cout<<"\nTotal mark is : "<<t_m<<"/"<<5*total_marks; 
}

int main()
{
    system ("clear");

    cout<<"\n\nStudent Details";
    cout<<"\n===============";

    learner();
    stud.get_data();
    stud.display();
    stud.sort_marks();
    stud.max_m();
    stud.min_m();
    stud.total_m();
}