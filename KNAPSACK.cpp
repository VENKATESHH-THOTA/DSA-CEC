#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b)
{
  return a.first > b.first;
}

int main()
{
    int n,v,w,k,h;
    int total = 0;
    vector<pair<int,pair<int,int>>>knap;
    cout<<"TOTAL NO.OF WEIGHTS"<<endl;
    cin>>n;
     cout<<"TOTAL WEIGHT"<<endl;
    cin>>k;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>w>>v;
        h = v/w;
        knap.push_back(make_pair(h,make_pair(v,w)));
    }
    sort(knap.begin(),knap.end(),compare);

    for(int i = 0 ; i < n ; i++)
    {
      if(k >= knap[i].second.second)
      {
          total = total + knap[i].second.first;
          k = k - knap[i].second.second;
          continue;
      }
      total = total + (knap[i].first * k);
      k = 0;
      break;
    }
    cout<<total<<endl;

}
