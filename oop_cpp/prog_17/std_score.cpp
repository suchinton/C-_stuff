#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

int no_entries=0;
void display(void);
inline int sucess();

class learner
{
    private:   

        char full_name[30];
        int enr_no;
        int total_marks;

    public:

        class marks
        {
            public:
                int m;
                char sub_name[15];
        }subs[5],temp1;

        int t_m =0;
        void get_data(void);
        void disp_n_e(void)
        {
            cout<<"\n\nName: "<<full_name;
            cout<<"\nEnrollment no. : "<<enr_no<<endl;
        }
        void sort_marks(void);
        void min_m(void);
        void max_m(void);
        void total_m(void);
        void set_subs(void)
        {
            strcpy(subs[0].sub_name,"Math");
            strcpy(subs[1].sub_name,"Eng");
            strcpy(subs[2].sub_name,"CSE");
            strcpy(subs[3].sub_name,"Phy");
            strcpy(subs[4].sub_name,"Chem");
        }
        learner()
        {
            total_marks = 100;
            set_subs();
        }
}stud[10],temp2;

void learner::get_data(void)        //fn to accept data
{
    cout<<"\nEnter full name (use _ for space) : ";
    cin>>full_name;
    cout<<"Enrollment no. : ";    
    cin>>enr_no;
    cout<<"\n\nEnter marks (out of 100):"<<endl;
    for(int i=0; i<5 ;i++)
        {
            cout<<subs[i].sub_name<<" : ";  
            cin>>subs[i].m;
        }
    sort_marks();
}

void display(void)          //display everything
{
    cout<<"\n\nAll Student results:"<<endl;
    for(int i=0; i<=no_entries; i++)
    {
        stud[i].disp_n_e();
        for(int j=0; j<5; j++)
            cout<<j+1<<") "<<stud[i].subs[j].sub_name<<" ~> "<<stud[i].subs[j].m<<endl;
        stud[i].min_m();
        stud[i].max_m();
        stud[i].total_m();
    }
    cout<<"\n";
    for(int i=0; i<=30 ;i++)
        cout<<"-";
    cout<<"\n\n1)Lowest scorer:";
    stud[0].disp_n_e();
    stud[0].total_m();
    cout<<"\n\n2)Highest scorer:";
    stud[no_entries].disp_n_e();
    stud[no_entries].total_m();
}

void learner::sort_marks(void)      //for sorting student marks
{
    int i,j;
    for (i=0; i < 5 ; i++)
        for(j=0; j < 5 - i ; j++)
        {
            if(subs[j].m > subs[j+1].m)
            {
                temp1 = subs[j];
                subs[j] = subs[j + 1];
                subs[j+1] = temp1;
            }
        }
}

inline int sucess()              //for sorting the objects
{
    int i,j;
    for (i=0; i < no_entries ; i++)
        for(j=0; j < no_entries - i ; j++)
        {
            if(stud[j].t_m > stud[j+1].t_m)
            {
                temp2 = stud[j];
                stud[j] = stud[j + 1];
                stud[j+1] = temp2;
            }
        }
}

void learner::min_m(void)       //display min score
{
    cout<<"\nMinimum mark is : "<<subs[0].sub_name<<" ~> "<<subs[0].m<<"/"<<t_m;
}

void learner::max_m(void)       //display max score
{
    cout<<"\nMaximum mark is : "<<subs[4].sub_name<<" ~> "<<subs[4].m<<"/"<<total_marks;
}

void learner::total_m(void)     //disp total score
{
    int t_m=0;
    for (int i=0; i<5 ;i++)
        t_m += subs[i].m;
    cout<<"\nTotal mark is : "<<t_m<<"/"<<5*total_marks; 
}

int main()
{
    system("clear");

    char ans;

    cout<<"\n| Suchinton          (A2345920063)                     |";
    cout<<"\n|------------------------------------------------------|";
    cout<<"\n| Prog to display lowest & highest salaries of workers |";
    cout<<"\n|------------------------------------------------------|"<<endl;

    cout<<"\n\nStudent Details";
    cout<<"\n===============";

    for(int i=0;i<=10;i++)
        {
            cout<<"\n\nstudent: "<<i+1;
            learner();
            stud[i].get_data();
            cout<<"\n\nDo you wish to enter more entries?(y/n): ";
            cin>>ans;
            if(ans=='y')
                {
                    no_entries++;
                    //system("clear");
                    continue;
                }
            else
                {
                    sucess();
                    display();
                    break;
                }
        }
    
  
}