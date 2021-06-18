#include<iostream>
#include<vector>
#include<bits/stdc++.h> 

using namespace std;

void codysJam(vector<int64_t> price){
    int64_t val;
    vector<int64_t>::iterator it;
    int64_t index;
    while(!price.empty()){
    val = price[0]*4/3;
    it = std::find (price.begin(), price.end(), val);
    index = distance(price.begin(), it);
    price.erase(price.begin()+index);
    cout<<price[0]<<" ";
    price.erase(price.begin()+0);
    }


}

int main(){
    int t,n;
    int64_t input;

    vector<int64_t> price;

    cin>>t;
    for(int i =0;i<t;i++)
    {   price.clear();
        cin>>n;
        for(int j =0;j<2*n;j++)
            {cin>>input;
             price.push_back(input);}

        cout<<"Case #"<<i+1<<": ";
        codysJam(price);
        cout<<endl;

    }

    return 0;
}