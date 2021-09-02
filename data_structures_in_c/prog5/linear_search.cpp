#include<iostream>
#include <unistd.h>

using namespace std;

 int main()
   {
      system("clear");

      cout<<"\n\tLinear Search";
      cout<<"\n\t-------------";

      int len,search;
      cout<<"\nEnter no. of elements you wish to enter: ";
      cin>>len;

      int A[len];

      for(int i=0;i<len;i++)
         {
            cout<<"\n\nElement "<<i+1<<" is: ";
            cin>>A[i];
         }
      
      system("clear");
      cout<<"\n\nArray enterd by you: "<<endl;
      for(int i=0;i<len;i++)
      cout<<A[i]<<" ";

      cout<<"\nenter the element to search: ";
      cin>>search;

      for(int i=0;i<len;i++)
         {
            if(A[i]==search)
               cout<<"\nElement "<<search<<" is stored in position: "<<i+1<<endl;
         }

      int ans;
      cout<<"\n\nwould you like to take a screenshot of the output?(Y/n): ";
      cin>>ans;
      if(ans=='y')
         system("gnome-screenshot");

   }
