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