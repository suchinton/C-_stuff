#include <iostream>
#include <unistd.h>

using namespace std;

class shape
{
    private:
        double l,w,r;

    public:
        
        double length, width, radius;
        void set_l_w(double length,double width)
            {
                l=length;
                w=width;
            }
        void set_r(double radius)
            {
                r=radius;
            }
        float circle_area(int r)
            {
                return 3.14*r*r;
            }
        float circle_cir(int r)
            {
                return 3.14*2*r;
            }
        float rect_area(float l,float w)
            {
                return l*w;
            }

        float rect_para(float l,float w)
            {
                return 2*(l+w);
            }
};


int main()
{
    int n;
    shape obj;

    system("clear");

    cout<<"\nSuchinton Chakravarty";
    cout<<"\nA2345920063";

    cout<<"\n\nEnter choice";
    cout<<"\n============";

    cout<<"\n\n1) Circle";
    cout<<"\n2) Rectangle";
    cout<<"\n3) Exit";
    cout<<"\n: ";
    cin>>n;

    switch(n)
    {
        case 1:
            {
                cout<<"\nEnter radius~> ";cin>>obj.radius;
                obj.set_r(obj.radius);
                cout<<"\nArea= "<<obj.circle_area(obj.radius);
                cout<<"\nCircumfrance= "<<obj.circle_cir(obj.radius)<<endl;
                break;
            }
        case 2:
            {
                cout<<"\nEnter Len: ";cin>>obj.length;
                cout<<"\nEnter Wid: ";cin>>obj.width;
                obj.set_l_w(obj.length,obj.width);
                cout<<"\nArea= "<<obj.rect_area(obj.length,obj.width);
                cout<<"\nParameter= "<<obj.rect_para(obj.length,obj.width)<<endl;
                break;
            }
        default:
            {
                system("exit");
            }
    }
}
