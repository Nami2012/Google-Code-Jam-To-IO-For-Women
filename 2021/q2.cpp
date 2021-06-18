#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;

string getMinString(vector<int>& blockLength){
    string result ="A";
    for(int i=0;i<blockLength.size();i++){
        if((i+1)&1){
            int size = blockLength[i];
            int j = 1;
            while(j<size){
                result+= 'A'+ j;
                j++;
            }

            if(i!=blockLength.size()-1){

                if(blockLength[i+1]>blockLength[i])
                    result += 'A'+blockLength[i+1];
                else
                {
                    result += 'A' + j;
                }
                
            }else
            {
                result += 'A' +j;
            }
            
                

        }else{
            int size = blockLength[i];
            int j = 1;
            char last = 'A'+size;
            cout<<last<<" ";
            while(j<=size){
                result+= last- j;
                j++;
            }
            
        }
        
    }

    return result;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;

    vector<int> blockLength;
    int size;int x;

    for(int i=0;i<t;i++){
        cin>>size;
        blockLength.clear();
        for(int i=0;i<size;i++){
            cin>>x;
            blockLength.push_back(x);
        }
        cout<<"Case #"<<i+1<<": "<<getMinString(blockLength)<<endl;
    }
    

    return 0;
}

/*3
2
2 3
2
5 1
1
2*/
/*Case #1: ABDCBA
Case #2: ABCDEFA
Case #3: ABC
*/