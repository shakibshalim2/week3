#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>matrix(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>matrix[i][j];
            }
        }
        map<int,int>mp;
        map<int,int>m;
        for(int i=0;i<n;i++){
            int lastElement=matrix[i][n-2];
            mp[lastElement]=i;
            m[lastElement]++;
        }

        int idx=0,val=0;
        for (auto &u:m){
            if(u.second==1){
                idx=u.first;
            } 
            else{
                val=u.first;
            }
        }

        for(int i=0;i<n-1;i++){
            cout<<matrix[mp[idx]][i]<<" ";
        }
        cout<<val<<endl;
    }
}
