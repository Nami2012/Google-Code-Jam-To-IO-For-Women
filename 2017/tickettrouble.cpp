#include<stdio.h>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void maxRowSum(set<pair<int,int>> &tickets){
    unordered_map <int,int> RowSum;
    

    for(auto const &x : tickets) { 
       
        if(RowSum.find(x.first)==RowSum.end()){
                RowSum[x.first] = 1;
            }
            else 
                RowSum[x.first]++;
        if(x.first!=x.second){
            if(RowSum.find(x.second)==RowSum.end()){
                RowSum[x.second] = 1;
            }
            else RowSum[x.second]++;
        }
    }
    int large =0;
    
    unordered_map<int, int>:: iterator y; 
    for(y=RowSum.begin();y!=RowSum.end();y++){
        if(large<y->second){
            large = y->second;
        }
     //cout<<y->first<<" "<<y->second<<endl;

    } 
    cout<<large;

}

int main(){
    int t,f,s,x,y;
    pair<int,int> ticket;
    set<pair<int,int>> tickets;
    cin>>t;
    for(int i=0;i<t;i++){
        tickets.clear();
        
        cin>>f>>s;
        
        for(int i=0;i<2*f;i+=2){
                cin>>x>>y;
                ticket = make_pair(x,y);
                tickets.insert(ticket);
        }
        cout<<"Case #"<<i+1<<": ";
       
       maxRowSum(tickets);
    cout<<endl;
        

    }

}