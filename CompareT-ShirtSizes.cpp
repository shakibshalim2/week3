#include<bits/stdc++.h>
using namespace std;
int getGeneralCategory(string &size){
    if(size=="M")
    return 0;
    if(size.back()=='S')
    return -1;
    if(size.back()=='L')
    return 1;
    return 0;
}

int countX(string &size){
    int count=0;
    for(char c:size){
        if(c=='X')
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        int categoryA=getGeneralCategory(a);
        int categoryB=getGeneralCategory(b);
        int xCountA=countX(a);
        int xCountB=countX(b);

        if(categoryA==categoryB){
            if(xCountA==xCountB){
                cout<<"="<<endl;
            } 
            else if(xCountA<xCountB){
                cout<<(categoryA==-1?">":"<")<<endl;
            }

            else{
                cout<<(categoryA==-1?"<":">")<<endl;
            }
        } 
        else{
            if(categoryA<categoryB){
                cout<<"<"<<endl;
            } 
            else{
                cout<<">"<<endl;
            }
        }
    }
}
