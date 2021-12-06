#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <colour.h>

using namespace std;

class OS
{
    public:
        fstream logo_os;
        virtual void latest_ver()=0;
        virtual float price()=0;
        virtual void licensing()=0;
        virtual int yoo()=0;
        virtual char * resource_usage()=0;
        virtual char * difficulty()=0;
        virtual void logo()=0;
        virtual float global_adoption()=0;
        void disply(OS *option)
        {
            option ->logo();
            cout<<"\nLatest Version   : ";  option ->latest_ver();
            cout<<"\nLicensing        : ";  option ->licensing();
            cout<<"\nDifficulty level : ";  printf("%s",option ->difficulty());
            cout<<"\nResource usage   : ";  printf("%s",option ->resource_usage());
            cout<<"\nYear of Origin   : ";  cout<<option ->yoo();
            cout<<"\nPrice            : ₹"; cout<<option ->price()<<"/-";
            cout<<"\nDesktop M.S      : ";  cout<<option ->global_adoption()<<"%\n";
        }
};

class Linux : public OS
{
    public:
        void logo()
        {
            FILE *os_logo = fopen("linux.txt","r");
            char line[50];
            while (fgets(line, sizeof(line), os_logo))
                printf("%s",line);
        }
        
        void latest_ver()
        { cout<<"kernel : 5.14.14"; }

        float price()
        { return 0; }
        
        void licensing()
        { cout<<"GNU General Public License version 2 only"; }
        
        int yoo()
        { return 1991; }
        
        char * resource_usage()
        {
            char * ru[]={"Very Low"};
            return * ru;
        }

        char * difficulty()
        {
            char * diff[]={"High"};
            return * diff;
        }

        float global_adoption()
        { return 2.18; }
};
 class Windows : public OS
 {
     public:
         void logo()
         {
             FILE *os_logo = fopen("win.txt","r");
             char line[50];
             while (fgets(line, sizeof(line), os_logo))
                 printf("%s",line);
         }
      
         void latest_ver()
         { cout<<"Windows 11, version 21H2"; }
         float price()
         { return 749.0; }
      
         void licensing()
         { cout<<"non-free and closed-source"; }
      
         int yoo()
         { return 1985; }
      
         char * resource_usage()
         {
             char * ru[]={"Very High"};
             return * ru;
         }
      
         char * difficulty()
         {
             char * diff[]={"Easy"};
             return * diff;
         }
         float global_adoption()
         { return 86.46; }
 };
 class MacOS : public OS
 {
     public:
         void logo()
         {
             FILE *os_logo = fopen("macos.txt","r");
             char line[50];
             while (fgets(line, sizeof(line), os_logo))
                 printf("%s",line);
         }
      
         void latest_ver()
         { cout<<"macOS Monterey	12.0.1"; }
         float price()
         { return 0; }
      
         void licensing()
         { cout<<"non-free and closed-source"; }
      
         int yoo()
         { return 1985; }
         char * resource_usage()
         {
             char * ru[]={"Moderate"};
             return * ru;
         }
         char * difficulty()
         {
             char * diff[]={"Easy"};
             return * diff;
         }
         float global_adoption()
         { return 13.14; }
 };

int main()
{
    OS * option;
    int ans;

    system("clear");
    
    cout<<"\n| Suchinton (A2345920063)                          |";
    cout<<"\n|--------------------------------------------------|";
    cout<<"\n| Implement Run time Polymorphism (object slicing) |";
    cout<<"\n|--------------------------------------------------|"<<endl;

    AGAIN:
    
    cout<<RESET;
    for(int i=0; i<50; i++)
        cout<<"=";    

    cout<<"\n\nOperating Systems Info :";
    cout<<MAGENTA<<"\n\n1) Linux";
    cout<<BLUE<<"\n2) Windows";
    cout<<YELLOW<<"\n3) MacOS"<<RESET;
    cout<<"\n4) EXIT";
    cout<<"\n\nChoice : ";
    cin>>ans;

    system("clear");
    
    for(int i=0; i<50; i++)
        cout<<"=";

    switch(ans)
    {
        case 1:
            cout<<MAGENTA;
            option = new Linux;
            option ->disply(option);
            goto AGAIN;
        case 2:
            cout<<BLUE;
            option = new Windows;
            option->disply(option);
            goto AGAIN;
        case 3:
            cout<<YELLOW;
            option = new MacOS;
            option->disply(option); 
            goto AGAIN;
        default:
            break;
    }

}