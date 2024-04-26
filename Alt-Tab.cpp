#include<bits/stdc++.h>
using namespace std;
string AltTab(int n){
    list<string>p;
    unordered_map<string,list<string>::iterator>mp;
    string pN;
    for(int i=0;i<n;i++){
        cin>>pN;
        if(mp.find(pN)!=mp.end()){
            p.erase(mp[pN]);
        }
        p.push_front(pN);
        mp[pN]=p.begin();
    }
    string result;
    for(string &name:p){
        result+=name.substr(name.size()-2);
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    string result=AltTab(n);
    cout<<result<<endl;
    return 0;
}
