#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,2,4,6,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key; int i=0;

    cout<<"array before sorting"<<endl;
    for(i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl;

     for(int j=1; j<n; j++)
     {
         key=arr[j];
         i=j-1;

         while(i>=0 && arr[i]>key)
         {
             arr[i+1]=arr[i];
             i=i-1;
         }

         arr[i+1]=key;
     }

     cout<<"array after sorting: "<<endl;

     for(i=0; i<n; ++i)
     {
         cout<<arr[i]<<" ";
     }

}