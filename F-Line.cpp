#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<ll>gains(n,0);
        ll total=0,maxG=0,curGain=0;

        for(ll i=0;i<n;i++){
            if(s[i]=='L'){
                total+=i;
                gains[i]=(n-1-i)-i;
            } 
            else{
                total+=n-1-i;
                gains[i]=i-(n-1-i);
            }
        }        
        sort(gains.begin(),gains.end(),greater<ll>());        
        ll runningTotal=total;
        for(ll k=0;k<n;k++){
            if(gains[k]>0){
                runningTotal+=gains[k];
            }
            cout<<runningTotal<<" ";
        }
        cout<<'\n';
    }
}
