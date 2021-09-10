#include <iostream>
#include <unistd.h>

using namespace std;

class cube
{
    private:
        int side;
    public:
        int s=2;
        long volume(void);
        cube ()
            {
                side=s;
            }
}cu;

long cube::volume(void)
{
    return side*side*side;
} 

class circle
{
    private:
        int radius;
        long area;
    public:
        int r;
        void area_cir(void);
        long get_area(void)
        {
            return area;
        }
        circle()
        {
            radius=r; 
            area= 3.14*radius*radius; 
        }
        circle(long a)
        {
            area=a;
        }
}ci;

void circle::area_cir(void)
{
    area = 3.14*radius*radius;
}

class rectangle
{
    private:
        int length;
        int width;
        long area;
    public:
        rectangle(int l, int w)
        {
            length=l;
            width=w;
            area=l*w;
        }
        void area_r()
        {
            cout<<area;
        }
}rec[10];

// long rectangle::area_r()
// {
//     return area;
// }

int main()
{
    system ("clear");

    char ans;
    int a;

    cout<<"\n| Suchinton (A2345920063)                                                             |";
    cout<<"\n|-------------------------------------------------------------------------------------|";
    cout<<"\n| Prog. to impliment seperate classes for vol. of cube and area of circle & rectangle |";
    cout<<"\n|-------------------------------------------------------------------------------------|"<<endl;

    AGAIN:
    
    cout<<"\n\n1) Volume of Cube";
    cout<<"\n2) Area of Circle";
    cout<<"\n3) Area of rectangle (multiple objects) ";
    cout<<"\n4) Exit";
    cout<<"\n\nPick an option: ";   
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            {
                int s;
                cout<<"\n\nside of cube: 2 units";
                cube();
                cout<<"\n\nVolume of cube of side 2 = "<<cu.volume();
                goto AGAIN;
                break;
            }
        case 2:
            {
                cout<<"\n\nEnter radius of cirle: ";
                cin>>ci.r;
                circle();
                ci.area_cir();
                cout<<"\n\nArea of circle of radius "<<ci.r<<" = "<<ci.get_area();
                goto AGAIN;
                break;
            }
        case 3:
            {
                int l,w;
                for(int i=0; i<=10; i++)
                {
                    cout<<"\n\nEnter length: ";
                    cin>>l;
                    cout<<"\nEnter width: ";
                    cin>>w;
                    rectangle(l,w);
                    cout<<"\nArea of rectangle of sides l= "<<l<<" w= "<<w<<" = "<<rec[i].area_r();
                }
                goto AGAIN;
                break;
            }
        default:
            {
                exit;
            }
    }
}