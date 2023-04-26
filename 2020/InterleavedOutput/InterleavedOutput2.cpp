#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fil(ar, val) memset(ar, val, sizeof(ar))

const int maxn = 505;

int dp[maxn][2][2][2][2];//IO,Io,iO,io

void computeIO(string S){
    fil(dp,0x80);int len = S.size();
    S = " "+S;
    dp[0][0][0][0][0]=0;

    for(int i=1;i<=len;i++){
        if(S[i]=='I'){
             for(int p=0; p <=1; p++){
                for(int q=0; q <=1; q++){
                    for(int r=0; r <=1; r++){
                        dp[i][p][1][q][r] = max(dp[i][p][1][q][r] ,dp[i-1][p][0][q][r]);
                        dp[i][1][p][q][r] = max(dp[i][1][p][q][r] ,dp[i-1][0][p][q][r]);
                    }
                }
            }
        }
        else if(S[i]=='i'){
            for(int p=0; p <=1; p++){
                for(int q=0; q <=1; q++){
                    for(int r=0; r <=1; r++){
                        dp[i][p][q][1][r] = max( dp[i][p][q][1][r] ,dp[i-1][p][q][0][r]);
                        dp[i][p][q][r][1] = max(dp[i][p][q][r][1] ,dp[i-1][p][q][r][0]);
                    }
                }
            }
        }
        else if(S[i]=='O'){
              for(int p=0; p <=1; p++){
                for(int q=0; q <=1; q++){
                    for(int r=0; r <=1; r++){
                        dp[i][0][p][q][r] = max( dp[i][0][p][q][r] ,1+dp[i-1][1][p][q][r]);
                        dp[i][p][q][0][r] = max(dp[i][p][q][0][r],dp[i-1][p][q][1][r]);
                    }
                }
            }
        }
        else{
              for(int p=0; p <=1; p++){
                for(int q=0; q <=1; q++){
                    for(int r=0; r <=1; r++){
                        dp[i][p][0][q][r] = max( dp[i][p][0][q][r] ,dp[i-1][p][1][q][r]);
                        dp[i][p][q][r][0] = max(dp[i][p][q][r][0],dp[i-1][p][q][r][1]);
                    }
                }
            }
        }
    }
    cout<<dp[len][0][0][0][0];
}

signed main(){
    int t;
    cin>>t;

    string S;
    for(int i=0;i<t;i++){
        cin>>S;
        cout<<"Case #"<<i+1<<": ";
        computeIO(S);
        
    cout<<endl;  
    }
    return 0;
}