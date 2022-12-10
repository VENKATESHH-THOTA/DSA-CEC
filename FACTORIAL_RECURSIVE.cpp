//THOTA VENKATESHH CE-SPL-14 2017388
#include<iostream>
using namespace std;

int fibb(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fibb(n-1);
    }

}

int main()
{
    int n,ans;
    cout<<"ENTER THE NUMBER"<<endl;
    cin>>n;
    ans = fibb(n);
    cout<<"\nFACTORIAL OF "<<n<<" :"<<ans;
    return 0;
}
