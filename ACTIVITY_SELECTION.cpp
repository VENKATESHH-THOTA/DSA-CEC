#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   vector<pair<int,int>>activity;
   int n,s,e;
   cin>>n;
   for(int i = 0; i < n ;i++)
   {
       cin>>s>>e;
       activity.push_back(make_pair(e,s));

   }
   sort(activity.begin(),activity.end());
   int count = 0;
   int Currentend = -1;

   for(int i = 0 ; i< n ; i++)
   {
       if(activity[i].second > Currentend)
       {
           count++;
           Currentend=activity[i].second;
       }

   }
   cout<<count<<endl;

}
