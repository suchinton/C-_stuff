#include<iostream>

using namespace std;

class A 
{
   public:
      int roll_no;
      int no_ent=0;
      void taverse (A arr[]);
      void enter (A arr[]);
}arr[10],*obj;

void A::taverse(A arr[])
{
   for(int i=0; i<no_ent; i++)
      cout<<"\n"<<i+1<<")"<<arr[i].roll_no;
}

void A::enter(A arr[])
{
   char ans;
   for(int i=0; i<10; i++)
      {
         cout<<"\nEnt "<<i+1<<" : ";
         cin>>arr[i].roll_no;
         cout<<"\ncont ? (y/n) : ";
         cin>>ans;
         if(ans=='n')
            break;
         else
            no_ent++;
      }
}

int main() 
{
   sizeof(obj)=sizeof(arr);
   obj->enter(arr);
   obj->taverse(arr);
}