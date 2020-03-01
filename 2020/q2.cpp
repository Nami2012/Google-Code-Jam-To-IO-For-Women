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
    char flag='1';char iflag ='1';
    for(int i=0;i<S.length();i++){

        if(S[i]=='I')
          { if(ch.empty()) flag ='1';
            ch.push(S[i]);
          }
        if(S[i]=='i')
            { if(chi.empty()) iflag = '1';
                chi.push(S[i]);
            }
        if(S[i]=='O'){

                if(!ch.empty() && flag!='O')
                {   ch.pop();
                    count++;
                    flag = 'O';
                }
                else if(!chi.empty() && iflag!='O')
                {
                    chi.pop();
                    iflag = 'O';
                }
            }  
          
        
        if(S[i]=='o')
        {   
            if(!chi.empty() && iflag != 'o')
           {
               chi.pop();
               
               iflag = 'o';
           }
          else if(!ch.empty() && flag != 'o')
           {
               ch.pop();
               flag = 'o';
           }
           

        }  
        
    }
           
           //cout<<S[i];
    
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