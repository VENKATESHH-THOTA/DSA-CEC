//THOTA VENKATESHH CE-SPL 14
#include<iostream>
using namespace std;
void t_of_h(int n,string a,string b,string c)
{
    if(n >= 1)
    {
        t_of_h(n - 1,a,c,b);
        cout<<n<<" DISK IS MOVED FROM "<<a<<"-->"<<c<<endl;
        t_of_h(n - 1,b,a,c);
    }
}

int main()
{
    string a = "src" , b = "auxilary" , c = "dest";
    int n;
    cout<<"ENTER THE NO.OF DISKS"<<endl;
    cin>>n;
    if(n <= 0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {
        t_of_h(n,a,b,c);
    }

}
