//THOTA VENKATESHH CE-SPL-14 2017388

#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int l,int h)
{
    if(l >= h)
    {
    int mid = (l+h)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid] > key)
    {
        binarySearch(arr,key,l,mid-1);
    }
    else
    {
        binarySearch(arr,key,mid+1,h);
    }

    }
    return -1;


}
int main()
{
  int n,flag;
  cout<<"ENTER THE SIZE OF ARRAY:";
  cin>>n;
  int low = 0 ,high = n-1,arr[n];
  cout<<endl;
  cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;
  for(int i = 0 ; i < n ; i++)
  {
    cin>>arr[i];
  }
  cout<<endl;
  int key;
  cout<<"ENTER THE KEY ELEMENT TO FIND:";
  cin>>key;
 flag = binarySearch(arr,key,low,high);
cout<<endl;
if(flag > 0)
{
 cout<<"KEY "<<key<<" FOUND AT INDEX "<<flag+1<<endl;
}
else if(flag < 0)
{
cout<<"KEY NOT FOUND"<<endl;
}

return 0;
}
