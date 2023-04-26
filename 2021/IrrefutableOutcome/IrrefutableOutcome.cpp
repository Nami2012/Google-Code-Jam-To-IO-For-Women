#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#include<string>
using namespace std;
unordered_map<int,char>  umap;
int result = 0;
int getWinner(string s, int colour){
    if(s.size()<1)
        return 0;
    int flag =0;
    int length1 = 0,length2 =0;
    if(s[0]==umap[colour]){
            length1 = getWinner(s.substr(1),1-colour);
            flag =1;
        }
        if(s[s.size()-1]==umap[colour]){
            length2 = getWinner(s.substr(0,s.size()-1),1-colour);
            flag = 1;
        }

        if(flag == 1) {
            return max(length1,length2);
        }
        else
        {   result = 1-colour;
            return s.size();
        }
    
    
 return 0;    
}
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    umap[1] ='I';
    umap[0] = 'O';
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int flag =0;
        cout<<"Case #"<<i+1<<": ";
        if(s.size()<2){
            cout<<s[0]<<" "<<1;
        }
        int length = 0;
        length = getWinner(s,1);

        if(result == 1) {
            cout<<"I"<<" "<<length+1;
        }
        else
        {
            cout<<"O"<<" "<<length+1;
        }
        cout<<endl;
    }


}

/*
5
IOIOOOII
OIIIIO
IO
IOIOIOI
IOIOIOOIO
*/

/*

Case #1: I 8
Case #2: O 7
Case #3: O 1
Case #4: I 1
Case #5: O 6

*/
