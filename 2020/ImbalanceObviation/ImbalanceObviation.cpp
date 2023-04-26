#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;

std::vector<int> adj[1004];
int cl[1004];

void dfs(int u, int c) {
	cl[u] = c;
	for (int v : adj[u]) 
		if (!cl[v]) 
			dfs(v, 3 - c);

}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;int n;int u,v;
    for(int i=0;i<t;i++){
        cout<<endl<<"case #"<<i+1<<": ";
        cin>>n;
        if(!(n&1)){
            for(int j=0;j<n;j++){
                adj[j].clear();
            }
			memset(cl, 0, sizeof(cl));
            for(int j=0;j<n;j+=2){
                adj[j].push_back(j+1);
                adj[j+1].push_back(j);
            }
            
            for(int j = 0;j<n;j+=2){
                cin>>u>>v;
                u--;v--;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
           
            for(int j=0;j<n ;j++){
                if(!cl[j])
                    dfs(j,1);
                
            }            
            for(int j=0;j<n;j++){
                //cout<<cl[i];
                if(cl[j]==1)
                    cout<<"L";
                else
                    cout<<"R";
            }
        }
    }

}