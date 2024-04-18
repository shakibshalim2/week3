#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>ans(n);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        vector<int>p(t);
        priority_queue<int>b;
        for(int j=0;j<t;j++){
            cin>>p[j];
        }
        long long hero=0;
        for(int power:p){
            if(power==0){
                if(!b.empty()){
                    hero+=b.top();
                    b.pop();
                }
            }
            else{
                b.push(power);
            }
        }
        ans[i]=hero;
    }
    for(long long a:ans){
        cout<<a<<endl;
    }
}
