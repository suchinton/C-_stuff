#include<iostream>
#include <unistd.h>

using namespace std;

int binarySearch(int A[],int l,int r,int search);

 int main()
   {
      system("clear");

      cout<<"\n\tBinary_search-[enter sorted elements]";
      cout<<"\n\t-------------------------------------";

      int len, search,result;
      cout<<"\nEnter no. of elements you wish to enter: ";
      cin>>len;

      int A[len];

      for(int i=0;i<len;i++)
         {
            cout<<"\n\nElement "<<i+1<<" is: ";
            cin>>A[i];
         }

      system("clear");
      cout<<"\n\nEntered array is: "<<endl;
      for(int i=0;i<len;i++)
         cout<<A[i]<<" ";

      cout<<"\n\nenter the element to search: ";
      cin>>search;

      result = binarySearch(A, 0, len - 1, search);
      if(A[result] != search)
         cout << "\nElement is not present in array"<<endl;

      else if(A[result]==search && A[result+1]==search)
         {
            cout<<"\nElement is present at position " << result<<endl;
            cout<<"\nElement is present at position " << result+1<<endl;
         }

      else if(A[result]==search && A[result-1]==search)
         {
            cout<<"\nElement is present at position " << result<<endl;
            cout<<"\nElement is present at position " << result+1<<endl;
         }

      else if(A[result+1]==search && A[result-1]==search && A[result]==search)
         {
            cout<<"\nElement is present at position " << result<<endl;
            cout<<"\nElement is present at position " << result+1<<endl;
            cout<<"\nElement is present at position " << result+2<<endl;
            system("exit");
         }
      else if(A[result]==search)
         cout<<"\nElement is present at position " << result+1<<endl;

      int ans;
      cout<<"\n\nwould you like to take a screenshot of the output?(Y/n): ";
      cin>>ans;
      if(ans=='y')
         system("gnome-screenshot");

   }

int binarySearch(int A[],int l,int r,int search)
   {
      if (r >= l) {
         int mid = l + (r - l) / 2;

      if (A[mid] == search)
         return mid;

      if (A[mid] > search)
         return binarySearch(A, l, mid - 1, search);
      return binarySearch(A, mid + 1, r, search);
   }
  
}
