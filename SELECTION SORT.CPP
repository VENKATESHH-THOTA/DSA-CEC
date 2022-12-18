//THOTA VENKATESHH CE-SPL-14 2017388
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    int k = 0;
    for(int i = 0 ; i < n - 1 ; i++)
    {
          k = i;
        for(int j = i+1;j < n; j++)
        {
            if(arr[j] < arr[k])
            {
               k = j;
            }
        }
        swap(arr[i],arr[k]);
    }


}


int main()
{
   int n;
   cout<<"ENTER THE SIZE OF N: ";
   cin>>n;

   int arr[n];
cout<<"\nENTER THE ELEMENTS INTO ARRAY:\n";

   for(int i = 0 ; i < n ; i++)
   {
       cin>>arr[i];
   }

   selection_sort(arr,n);
   cout<<"\n NUMBERS AFTER SORTING ARE:"<<endl;

   for(int i = 0 ; i < n ; i++)
   {
       cout<<arr[i]<<" ";
   }
 return 0;
}
