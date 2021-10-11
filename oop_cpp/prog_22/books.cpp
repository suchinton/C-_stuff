#include <iostream>
#include <unistd.h>

int no_entries = 0;

using namespace std;

class media
{
    public:
        char title[40];
        char publication[40];
};

class books:public media
{
    public:
        int no_pages;
        void read(void);
        void show(void);
};

void books::read(void)
{
    cout<<"\nTitle          : ";    scanf("%s",title);
    cout<<"Publication    : ";    scanf("%s",publication);
    cout<<"No. of pages   : ";    cin>>no_pages;
}

void books::show(void)
{
    cout<<"\nTitle          : ";    cout<<title;
    cout<<"\nPublication    : ";    cout<<publication;
    cout<<"\nNo. of pages   : ";    cout<<no_pages<<endl;
}

class video:public media
{
    public:
        int playing_time;
        void read(void);
        void show(void);
};

void video::read(void)
{
    cout<<"\nTitle          : ";    scanf("%s",title);
    cout<<"Publication    : ";    scanf("%s",publication);
    cout<<"Run time (mins): ";    cin>>playing_time;
}

void video::show(void)
{
    cout<<"\nTitle          : ";    cout<<title;
    cout<<"\nPublication    : ";    cout<<publication;
    cout<<"\nRun time (mins): ";    cout<<playing_time<<endl;
}

int main()
{
    char ans;
    int a;
    video v[10];
    books b[10];

    system ("clear");

    cout<<"\n| Suchinton (A2345920063)                               |";
    cout<<"\n|-------------------------------------------------------|";
    cout<<"\n| Prog. to impliment inheritance media, books and video |";
    cout<<"\n|-------------------------------------------------------|"<<endl;   

    cout<<"\n1) Video tape";
    cout<<"\n2) Book";
    cout<<"\n3) Exit";

    AGAIN:cout<<"\n\nChoice : "; cin>>a;

    switch(a)
    {
        case 1:
            {
                for(int i=0; i<10 ;i++)
                    {
                        cout<<"\nEntry no. "<<no_entries+1;
                        v[i].read();
                        cout<<"\n\nMake more entries? (y/n) : ";
                        cin>>ans;
                        if(ans=='y')
                            {
                                no_entries++;
                                cout<<"-------------------------------------";
                                continue;
                            }
                        else break;
                    }
                
                system ("clear");

                for(int i=0; i<=no_entries; i++)
                    {
                        cout<<"\nEntry no. "<<i+1;
                        v[i].show();
                        cout<<"---------------------------------------";
                    }
                break;
            }
        case 2:
            {
                for(int i=0; i<10 ;i++)
                    {
                        cout<<"\nEntry no. "<<no_entries+1;
                        b[i].read();
                        cout<<"\n\nMake more entries? (y/n) : ";
                        cin>>ans;
                        if(ans=='y')
                            {
                                no_entries++;
                                cout<<"-------------------------------------";
                                continue;
                            }
                        else break;
                    }
                
                system ("clear");

                for(int i=0; i<=no_entries; i++)
                    {
                        cout<<"\nEntry no. "<<i+1;
                        b[i].show();
                        cout<<"---------------------------------------";
                    }
                break;
            }
        case 3:
            {
                exit(0);
            }
        default:
            {
                cout<<"\nInvalid option!!";
                goto AGAIN;
            }
    }
}