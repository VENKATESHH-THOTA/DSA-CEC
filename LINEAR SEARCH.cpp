//THOTA VENKATESHH CE-SPL-14 2017388

#include<iostream>
using namespace std;
int main()
{
  int n,flag = 0,i = 0;
  cout<<"ENTER THE SIZE OF ARRAY:";
  cin>>n;
  int arr[n];
  cout<<endl;
  cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;
  for(i = 0 ; i < n ; i++)
  {
    cin>>arr[i];
  }
  cout<<endl;
  int key;
  cout<<"ENTER THE KEY ELEMENT TO FIND:";
  cin>>key;
  cout<<endl;
for(i = 0 ; i < n ; i++)
{
 if(arr[i] == key)
 {
    flag = 1;
    break;
  }
}
if(flag == 1)
{
 cout<<"KEY "<<key<<" FOUND AT INDEX "<<i+1<<endl;
}
else
{
cout<<"KEY NOT FOUND"<<endl;
}

return 0;
}
