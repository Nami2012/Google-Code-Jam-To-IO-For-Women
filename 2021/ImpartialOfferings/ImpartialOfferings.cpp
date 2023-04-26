#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;

int getMin(vector<int>& aniSize){
    sort(aniSize.begin(),aniSize.end());
    int result=1, sweetSize = 1;
    //cout<<aniSize[0]<<" ";
    for(int i=1;i<aniSize.size();i++){
        //cout<<aniSize[i]<<" ";
        if(aniSize[i]>aniSize[i-1])
            sweetSize++;
        result +=sweetSize;
    }

    return result;
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;

    vector<int> aniSize;
    int x;
    for(int i=0;i<t;i++){
        int size;
        cin>>size;
        aniSize.clear();
        for(int i=0;i<size;i++){
            cin>>x;
            aniSize.push_back(x);
        }
        cout<<"Case #"<<i+1<<": "<<getMin(aniSize);
    }

    return 0;
}