#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>a(n);
        unordered_map<string,bool>mp;

        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=true;
        }
        string result="";
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=1;j<a[i].size();j++){
                string s1=a[i].substr(0,j);
                string s2=a[i].substr(j);
                if(mp[s1]&&mp[s2]){
                    found=true;
                    break;
                }
            }
            result+=found?'1':'0';
        }
        cout<<result<<"\n";
    }
    return 0;
}
