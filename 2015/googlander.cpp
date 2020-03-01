#include<iostream>
#include<vector>

using namespace std;

int main(){
    int64_t R = 25;
    int64_t C = 25;
    int64_t dp[25][25];
    for(int64_t i=0;i<C;i++){
            dp[i][0] = 1;
        }
        
        for(int64_t j=0;j<R;j++){
            dp[0][j] = 1;
            
        }
    
        for(int64_t i =1;i<R;i++){
            for(int64_t j = 1;j<C;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
            
        }

     int64_t t,m,n;
     cin>>t;
    
     for(int64_t i=0;i<t;i++){
         cin>>m>>n;
         cout<<"Case #"<<i+1<<": "<<dp[m-1][n-1]<<endl;
              }
    return 0;
}