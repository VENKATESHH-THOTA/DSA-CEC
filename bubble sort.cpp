#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    for (int i = 0 ; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i ; j++ )
        {
            if(arr [j] > arr[j + 1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
 }

int main()
{

    int n;
  cout<<"ENTER THE NO.OF ELEMENTS TO BE INSERTED"<<endl;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i< n ; i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);

    cout<<"\n"<<endl;
    cout<<"ARRAY AFTER SORTING\n"<<endl;
    for (int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}
