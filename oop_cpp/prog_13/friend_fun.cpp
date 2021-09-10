#include <iostream>
#include <unistd.h>

using namespace std;

class students
{
    int roll_no;
    char name[20];
    char class_sec[20];

    public:
        friend void get_details(void);
};

