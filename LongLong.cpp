#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        ll sum=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=abs(a[i]);
        }
        ll ans=0;
        int i=0;
        while(i<n){
            if(a[i]<0){
                ans++;
                while(i<n&&a[i]<=0){
                    i++;
                }
            } 
            else{
                i++;
            }
        }
        
        cout<<sum<<" "<<ans<<endl;
    }
}
