#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void error(vector<int> values,int k){
    sort(values.begin(),values.end());
    int error =0,level=0;
       for(int i=1;i<values.size();i+=2){
           error+=(values[i-1] - level)*(values[i-1] - level)+ (values[i]-level)*(values[i]-level);
            level++;
       }
       if(k&1){
           error+= (values[values.size()-1]-level)*(values[values.size()-1]-level);
       }

           
       
        
    cout<<error<<endl;
}

int main(){
    int t,k,input;
    vector<int> values;
    cin>>t;
    for(int i=0;i<t;i++){
        values.clear();
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>input;
            values.push_back(input);
        }
        cout<<"Case #"<<i+1<<" ";
        error(values,k);
    }
}