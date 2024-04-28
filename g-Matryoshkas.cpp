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
        vector<int>a;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(freq[num]==0){
                a.push_back(num);
            }
            freq[num]++;
        }
        sort(a.begin(),a.end(),greater<int>());
        int sets=0;
        for(int num:a){
            while(freq[num]>0){
                sets++;
                for(int i=num;i>=1&&freq[i]>0;i--){
                    freq[i]--;
                }
            }
        }
            cout<<sets<<endl;
        }
        
}
