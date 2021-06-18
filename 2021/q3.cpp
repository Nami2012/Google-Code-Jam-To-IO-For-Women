#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;




int getShortDistance(vector<vector<int>>& adj,int m,int n, int s, int t){
    if( s == t || adj[s][t] == 1)
        return 0;
    
  
    vector<int> dist(adj.size());
    for(int i=0;i<dist.size();i++){
            dist[i] = INT32_MAX;
        }
    dist[s] = 0;
    queue<int> q;
    q.push(s);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i=0;i<m+n;i++){
            if(adj[u][i]==1){
                   if(dist[i] == INT32_MAX){
                    if(i<m)
                        q.push(i);
                    dist[i] = dist[u]+1;
                } 
            }
            
        }
    }

    if(dist[t] != INT32_MAX){
        //adj[s][t] = 1;
        return dist[t]-1;
    }

  return -1;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n,q;
        cin>>m>>n>>q;char x;
        vector<vector<int>> adj(m+n,vector<int>(m+n,0));
        for(int i=0;i<m+n;i++){
            for(int j=0;j<m+n;j++){
                cin>>x;
                if(x=='Y')
                    adj[i][j] = 1;
            }
        }
        cout<<endl<<"Case #"<<i+1<<": ";
        int u,v;
        for(int i=0;i<q;i++){
            cin>>u>>v;
            cout<<getShortDistance(adj,m,n,u-1,v-1)<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

//input
// adjacency matrix  with 0 and 1 ; 1 for yes and 0 for no
// perform dfs
// continue dfs only if manager;

/*

3
2 2 3
YYYY
YYNN
YNYN
YNNY
2 3
2 4
1 4
3 2 2
YYYNN
YYNYN
YNYNY
NYNYN
NNYNY
2 5
4 5
1 1 1
YN
NY
1 2

*/

/*

Case #1: 1 1 0
Case #2: 2 3
Case #3: -1

*/
