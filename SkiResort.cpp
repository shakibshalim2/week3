#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long count=0;
        int start=0;
        vector<bool>valid(n,false);
        for(int i=0;i<n;i++){
            if(a[i]<=q)
            valid[i]=true;
        }
        int valid_length=0;
        for(int end=0;end<n;end++){
            if(valid[end]){
                valid_length++;
                if(valid_length>=k){
                    count+=(valid_length-k+1);
                }
            } 
            else{
                valid_length=0;
            }
        }
        cout<<count<<endl;
    }
}
