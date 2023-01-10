#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef vector<pair<int,pair<int,int>>>krus;
int find(int u,int *parent)
{
    if(parent[u] < 0)
    {
        return u;
    }
    return find(parent[u],parent);
}
void unionByweight(int u,int v, int *parent)
{
    int pu = find(u,parent);
    int pv = find(v,parent);
    if(pu != pv)
    {
        if(parent[pu] < parent[pv])
        {
            parent[pu] += parent[pv];
            parent[pv] = pu;
        }
        else
        {
            parent[pv] += parent[pu];
            parent[pu] = pv;
        }
    }
}
krus kruskals(krus g,int v)
{
    krus res;
    int s,d,w;
    int parent[v];
    for(int i = 0; i < v ; i++)
    {
        parent[i] = -1;
    }
    sort(g.begin(),g.end());
    int n = g.size();
    for(int i = 0 ; i < n ;i++)
    {
        s = g[i].second.first;
        d = g[i].second.second;
        w = g[i].first;
        if(find(s,parent) != find(d,parent))
        {
            res.push_back(g[i]);
            unionByweight(s,d,parent);
        }
       
    }
    return res;

}

int main()
{
    krus g, res;
    int w,v,e,s,d;
    cin>>v>>e;
    for(int i = 0 ; i < e ;i++)
    {
        cin>>s>>d>>w;
        g.push_back(make_pair(w,make_pair(s,d)));

    }
    res = kruskals(g,v);
    int sum = 0;
    for(int i = 0 ; i < res.size() ; i++)
    {
        int w = res[i].first;
        cout<<res[i].second.first<<"<--->"<<res[i].second.second<<endl;
        sum = sum + w;
    }
    cout<<sum<<endl;


}
