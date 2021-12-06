#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <colour.h>
#include "OS.h"

using namespace std;

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