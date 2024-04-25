#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[arr[i]]++;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int sets=0;
        for(int i=0;i<n;i++){
            if(freq[arr[i]]>0){
                sets++;
                int size=arr[i];
                while(size>0&&freq[size]>0){
                    freq[size]--;
                    size--;
                }
            }
        }
        cout<<sets<<endl;
    }
}
