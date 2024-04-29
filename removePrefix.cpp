#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int>lPos;
        int pLength=0;
        for(int i=0;i<n;i++){
            if(lPos.find(a[i])!=lPos.end()){
                pLength=max(pLength,lPos[a[i]]+1);
            }
            lPos[a[i]]=i;
        }
        cout<<pLength<<endl;
    }
}
