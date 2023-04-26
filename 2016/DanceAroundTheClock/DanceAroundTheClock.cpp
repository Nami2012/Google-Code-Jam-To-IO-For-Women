#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void interodd(vector<int64_t> &dancers){

    int temp;

    for(int i=0;i<dancers.size()-1;i+=2){
            temp = dancers[i];
            dancers[i] = dancers[i+1];
            dancers[i+1] = temp;
    }

    for(int i=0;i<dancers.size();i++){
        cout<<dancers[i];
    }
    cout<<endl;

}

void intereven(vector<int64_t> &dancers){

    int temp;

    for(int i=1;i<dancers.size()-2;i+=2){
            temp = dancers[i];
            dancers[i] = dancers[i+1];
            dancers[i+1] = temp;
    }
    temp = dancers[0];
    dancers[0] = dancers[dancers.size()-1];
    dancers[dancers.size()-1] = temp;


    for(int i=0;i<dancers.size();i++){
      cout<<dancers[i];}

     cout<<endl;


}


void dance(int d,int n, int k){
   vector<int64_t> dancers;
   for(int i=1;i<=d;i++){
       dancers.push_back(i);
   }

   for(int i=0;i<n;i++){
       if(dancers[0] & 1){
          interodd(dancers);
       }
       else
       {
           intereven(dancers);
       }
       
   }

   vector<int64_t>::iterator it;
   it = std::find (dancers.begin(), dancers.end(), k);    
    int index = distance(dancers.begin(), it);
    cout<<(index+1>dancers.size()-1 ? dancers[0]:dancers[index+1])<<" "<<(index-1<0 ? dancers[dancers.size()-1]:dancers[index-1])<<endl;

}


int main(){

    int64_t  t,d,n,k;
    cin>>t;

    for(int i=0;i<t;i++){
       cin>>d>>k>>n;

        cout<<"Case #"<<i+1<<": ";
        dance(d,n,k);
      
    }
    
} 