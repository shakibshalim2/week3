#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<vector<ll>> v;
vector<ll> cntT;

void dfs(ll node,ll pr){
    cntT[node]=(v[node].size()==1&&node!=1)?1:0;
    for(ll child:v[node]){
        if(child!=pr){
            dfs(child,node);
            cntT[node]+=cntT[child];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;        
        v.clear();
        v.resize(n+1);
        cntT.clear();
        cntT.resize(n+1,0);

        for(ll i=1;i<n;i++){
            ll x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        dfs(1,-1);
        ll q;
        cin>>q;
        while(q--){
            ll x,y;
            cin>>x>>y;
            cout<<cntT[x]*cntT[y]<<'\n';
        }
    }
}
