#include <iostream>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        while(n>0){
            sum+=n;
            n=(n/2);
        }
        cout<<sum<<'\n';
    }
}
