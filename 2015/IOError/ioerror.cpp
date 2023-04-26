#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>
#include<string.h>
#include<math.h>

using namespace std;

void btoi(vector<int> &num){
    char c;int ASCII=0;int j=0;
    for(int i= num.size()-1;i>=0;i--){
            ASCII += pow(2,j++)*num[i];
    }
    
    cout<<(char)ASCII;
    
}
int main(){
    string str;
    vector<int> number;
    int t,b;
    cin>>t;

    for(int j =0 ;j<t;j++){
    cin>>b;
    cin>>str;
    for(int i=0;i<str.length();i++){
        //cout<<number.size();
        if(str[i]=='I')
            number.push_back(1);
        else
            number.push_back(0);
        if(number.size()==8)
        {   
           btoi(number);
           number.clear();
           
        }
    }cd
    cout<<endl;
    }
    
    return 0;
}
