#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <colour.h>
#include "OS.h"

using namespace std;

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