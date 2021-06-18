#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;

void computeIO(string S){
    stack<char> ch;
    stack<char> chi;int count =0;
    for(int i=0;i<S.length();i++){

        if(S[i]=='I')
            ch.push(S[i]);
        if(S[i]=='i')
            chi.push(S[i]);
        
        {if(S[i]=='O' && !ch.empty())
           { ch.pop();
            count++;
           }
           else if(S[i]=='O' && ch.empty() && !chi.empty())
           {
               chi.pop();
           }
        }
           
        {if(S[i]=='o' && !ch.empty() && chi.empty())
           {
               ch.pop();
           }
           else if(S[i]=='o' && !chi.empty())
           {
               chi.pop();
           }
           
        }       
           //cout<<S[i];
    }
    cout<<count;
}

int main(){
    int t;
    cin>>t;

    string S;
    for(int i=0;i<t;i++){
        cin>>S;

        cout<<"Case #"<<i+1<<": ";
        computeIO(S);
        
    cout<<endl;
        

    }

}