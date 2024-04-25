#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int>carC(n);
        vector<int>P(m);
        for(int i=0;i<n;i++)
            cin>>carC[i];
        for(int j=0;j<m;j++)
            cin>>P[j];
        sort(carC.rbegin(),carC.rend());
        sort(P.rbegin(),P.rend());

        int cIdx=0,oIdx=0;
        long long totalEnergy=0;
        while(cIdx<n&&oIdx<m){
            long long maxPossible=(long long)P[oIdx]*h;
            totalEnergy+=min((long long)carC[cIdx],maxPossible);
            cIdx++;
            oIdx++;
        }
        cout<<totalEnergy<<"\n";
    }
}
