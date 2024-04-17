#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>prefix(n);
        prefix[0]=a[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+a[i];
        }
        long long sum=prefix[n-1];
        bool p=sum%2!=0;
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--; 
            r--;
            long long rangeS=prefix[r]-(l>0?prefix[l-1]:0);
            long long newRangeS=(r-l+1)*k;
            long long total=sum-rangeS+newRangeS;
            cout<<((total%2!=0)?"YES":"NO")<<'\n';
        }
    }
}
