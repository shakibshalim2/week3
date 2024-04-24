#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,max_friends=0;
        cin>>n;
        vector<ll>a(n),b(n),c(n);
        vector<pair<ll,ll>>va,vb,vc;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            va.push_back({a[i],i});
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
            vb.push_back({b[i],i});
        }
        for(ll i=0;i<n;i++) {
            cin>>c[i];
            vc.push_back({c[i],i});
        }
        sort(va.begin(),va.end(),greater<pair<ll,ll>>());
        sort(vb.begin(),vb.end(),greater<pair<ll,ll>>());
        sort(vc.begin(),vc.end(),greater<pair<ll, ll>>());
        for(int i=0;i<3&&i<n;i++){
            for(int j=0;j<3&&j<n;j++){
                for(int k=0;k<3&&k<n;k++){
                    if(va[i].second!=vb[j].second&&va[i].second!=vc[k].second&&vb[j].second!=vc[k].second){
                        max_friends=max(max_friends,va[i].first+vb[j].first+vc[k].first);
                    }
                }
            }
        }
        cout<<max_friends<<endl;
    }
}
