#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

using namespace std;

int no_entries=0;

void new_entry(void);
void delete_entries(void);
void disp_entries(void);

class Book_rec
{
    public:
        int book_no;
        char name[30];
        int pages;
        float price;
}Books[20];

int main()
{
    system ("clear");

    int i=0,a,j=0;
    char ans;

    cout<<"\n| Suchinton (A2345920063)       |";
    cout<<"\n|-------------------------------|";
    cout<<"\n| Prog. to display Book records |";
    cout<<"\n|-------------------------------|"<<endl;

    AGAIN:
    cout<<"\n\nBook Records";
    cout<<"\n============";

    if(no_entries==0)
        cout<<"\n\nNo entries";

    cout<<"\n\n1) New entry";
    cout<<"\n2) Delete entry";
    cout<<"\n3) Display records";
    cout<<"\n4) Exit";
    cout<<"\n\nPick an option: ";   
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            {
                new_entry();
                goto AGAIN;
                break;
            }
        case 2:
            {
                delete_entries();
                goto AGAIN;
                break;
            }
        case 3:
            {
                disp_entries();
                goto AGAIN;
                break;
            }
        default:
            {
                exit;
            }
    }
}

void new_entry(void)
{
    char ans;
    for(int i=no_entries;i<=20;i++)
    {
        cout<<"\n\tEntery: "<<i+1;
        cout<<"\nBook No.: ";           cin>>Books[i].book_no;
        cout<<"\nBook Title (Use '_' in place of space): ";         cin>>Books[i].name;
        cout<<"\nNo. of pages: ";       cin>>Books[i].pages;
        cout<<"\nPrice: ";              cin>>Books[i].price;
        cout<<"\ncontinue?(y/n) :";     cin>>ans;
        if(ans=='y')
            {
                no_entries++;
                system("clear");
                continue;
            }
        else
            break;
    }
}

void delete_entries(void)
{
    int pos;
    printf("\nposition of element: ");  cin>>pos;
    pos -= 1;
    for (int i = pos; i < no_entries; i++)
        Books[i] = Books[i + 1];
    no_entries -= 1;
} 

void disp_entries(void)
{
    cout<<"S.no. ~>  Book No. ~> Title ~> Pages ~> Price(INR)";
    for(int i=0; i<=no_entries; i++)
        {
            cout<<"\n"<<i+1<<") \t"<<Books[i].book_no<<"\t\t";
            cout<<Books[i].name;
            cout<<"\t"<<Books[i].pages;
            cout<<"\t"<<Books[i].price;
        }
}
