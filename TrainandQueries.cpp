#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        map<int,pair<int,int>>position;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(!position.count(x)){
                position[x].first=i;
            position[x].second=i;
            }
            else{
                position[x].second=i;
            }
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            if(!position.count(a)||!position.count(b)||position[a].first>position[b].second){
                cout<<"NO\n";
            } 
            else{
                cout<<"YES\n";
            }
        }
    }
}
