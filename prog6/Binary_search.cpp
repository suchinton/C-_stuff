#include<iostream>
#include <unistd.h>

using namespace std;

int binarySearch(int A[],int l,int r,int search);

 int main()
   {
      system("clear");

      cout<<"\nBinar_search-[Bubble sort]";
      cout<<"\n--------------------------";

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
      cout<<"\n\nBefore Sorting: "<<endl;
      for(int i=0;i<len;i++)
         cout<<A[i]<<" ";

      int i,j;
      for(i=0;i<len-1;i++)
      for(j=0;j<len-i-1;j++)
         {
            if(A[j]>A[j+1])
               {
                  int temp=A[j];
                  A[j]=A[j+1];
                  A[j+1]=temp;
               }
         }

      cout<<"\n\nAfter sorting"<<endl;
      for(int i=0;i<len;i++)
         cout<<A[i]<<" "; 

      cout<<"\n\nenter the element to search: ";
      cin>>search;

      result = binarySearch(A, 0, len - 1, search);
      if(A[result] != search)
         cout << "Element is not present in array"<<endl;
      else 
         cout << "Element is present at position " << result+1<<endl;

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
