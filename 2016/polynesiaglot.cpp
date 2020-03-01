#include<iostream>

using namespace std;
int c,v;


int64_t words_iter(int l){
    int64_t word[l];
    word[0]=1;
    word[1]= v;
    for(int i = 2;i<=l;i++){
        word[i] = (v*word[i-1] + v*c*word[i-2])%1000000007;
    }
    return word[l];}

int64_t words(int l){
    if(l==0){
        return 1;
    }

    if(l==1)
        {
            return v;
        }
    return (v*words(l-1) + v*c*words(l-2))%1000000007;
}


int main(){

    int t,l; 
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>c>>v>>l;
            cout<<"Case #"<<i+1<<": "; 
            cout<<words_iter(l);
    }



}