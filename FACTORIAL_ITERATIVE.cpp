//THOTA VENKATESHH CE-SPL-14 2017388
#include<iostream>
using namespace std;


int main()
{
    int n,ans = 1;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>n;
    for(int i = n ; i >= 1; i--)
    {
        ans  = ans * i;
    }
    cout<<"\nFACTORIAL OF "<<n<<" :"<<ans;
    return 0;
}
