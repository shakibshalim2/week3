#include<bits/stdc++.h>
using namespace std;
bool checkMeow(string &s){
    string c;
    for(char ch:s){
        char lower=tolower(ch);
        if(c.empty()||c.back()!=lower){
            c.push_back(lower);
        }
    }
    return c=="meow";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(checkMeow(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
