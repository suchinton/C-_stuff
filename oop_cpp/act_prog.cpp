#include <iostream>
#include <unistd.h>
#include <string.h>

using namespace std;

int no_entries=0;
void display(void);
float class_avg(class marks ob[]);

class marks
{
    private:
        char name[30];
        int roll_no;
        int total_marks;
    public:
        class sub
        {
            public:
                int m;
                char sub_name[15];
        }subs[3],temp1;

        int t_m =0;
        void get_data(void);
        void disp_n_e(void)
        {
            cout<<"\n\nName: "<<name;
            cout<<"\nEnrollment no. : "<<roll_no<<endl;
        }
        void total_m(void);
        marks()
        {
            total_marks = 100;
            set_subs();
        }
        void set_subs(void)        
        {
            strcpy(subs[0].sub_name,"OOPS");
            strcpy(subs[1].sub_name,"DATA STRUCTURES");
            strcpy(subs[2].sub_name,"DBMS");
        }
}stud[10],temp2;

class OOP : public marks
{
    public:
    void get_oop(void)
    {
            cout<<subs[0].sub_name<<" : ";  
            cin>>subs[0].m;
    }
};

class data_struct : public marks
{
    public:
    void get_data_struct(void)
    {
        cout<<subs[1].sub_name<<" : ";  
        cin>>subs[1].m;
    }
};

class DBMS : public marks
{
    public:
    void get_dbms(void)
        {
            cout<<subs[2].sub_name<<" : ";  
            cin>>subs[2].m;
        }
};

void marks::get_data(void)        //fn to accept data
{
    cout<<"\nEnter full name (use _ for space) : ";
    cin>>name;
    cout<<"Enrollment no. : ";    
    cin>>roll_no;

}

void display(void)          //display everything
{
    cout<<"\n\nAll Student results:"<<endl;
    for(int i=0; i<=no_entries; i++)
    {
        stud[i].disp_n_e();
        for(int j=0; j<3; j++)
            cout<<j+1<<") "<<stud[i].subs[j].sub_name<<" ~> "<<stud[i].subs[j].m<<endl;
    }
    cout<<"\n";
    for(int i=0; i<=30 ;i++)
        cout<<"-";
    cout<<"\n\nClass average : ";
    class_avg(stud);
}

float class_avg(class marks ob[])
{
    float avg=0;
    for(int i=0; i<no_entries ;i++)
        for(int j=0; j<3; j++)
            avg+=ob[i].subs[j].m;

    return avg/no_entries;
}

int main()
{
    system ("clear");

    char ans;
    OOP  o[10];
    DBMS d[10];
    data_struct ds[10];
    cout<<"\n\nStudent Details";
    cout<<"\n===============";

    for(int i=0;i<=10;i++)
        {
            cout<<"\n\nstudent: "<<i+1;
            marks();
            stud[i].get_data();
            o[i].get_oop();
            d[i].get_dbms();
            ds[i].get_data_struct();

            cout<<"\n\nDo you wish to enter more entries?(y/n): ";
            cin>>ans;
            if(ans=='y')
                {
                    no_entries++;
                    system("clear");
                    continue;
                }
            else
                {
                    display();
                    break;
                }
        }
}