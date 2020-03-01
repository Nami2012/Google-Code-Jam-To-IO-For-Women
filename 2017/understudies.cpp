#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>


using namespace std;

double  calc_probability(vector<double> probability){
 double both_unavailable;
 double one_role;
 double two_role = 1;

 while(probability.size()!=0){
     both_unavailable = probability[0]*probability[probability.size()-1];
     one_role = 1- both_unavailable;
     
     two_role *= one_role;
   
     probability.erase(probability.begin());
     probability.pop_back();
 }

 return two_role;

}
int main(){
    vector<double> probability;
    double input;
    int t,n;
    cin>>t;
    
    for(int i=0;i<t;i++){
        probability.clear();
        cin>>n;
        for(int j=0;j<2*n;j++){
            cin>>input;
            probability.push_back(input);

        }
        sort(probability.begin(),probability.end() );
        
        cout<<endl<<"Case #"<<i+1<<": "<<fixed<<setprecision(6)<<calc_probability(probability);

    }
    return 0;

}