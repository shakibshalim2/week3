#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200;
const int MAXM = 200;
const int MAXDIAG = 400;

int board[MAXN][MAXM];
long long diag1[MAXDIAG];
long long diag2[MAXDIAG];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;        
        memset(diag1,0,sizeof(diag1));
        memset(diag2,0,sizeof(diag2));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>board[i][j];
                diag1[i-j+m-1]+=board[i][j];
                diag2[i+j]+=board[i][j];
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long cur_sum=diag1[i-j+m-1]+diag2[i+j]-board[i][j];
                sum=max(sum,cur_sum);
            }
        }
        cout<<sum<<"\n";
    }
}
