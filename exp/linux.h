#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <colour.h>
#include "OS.h"

using namespace std;

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