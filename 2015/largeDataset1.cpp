
#include<iostream>
#include<cstdlib>
#include<algorithm>

using namespace std;

int colourCount(int64_t K,int64_t V){
    int64_t count =0;
    for(int64_t r=0;r<=K;r++){
        int64_t = max(r-V,0);

        /*for(int64_t g= max(r-V,0);g<=min(r+V,K);g++){
            int minb = max({r-V,g-V,0},comp);
            int maxb = min({r+V,g+V,K},comp);
            count = maxb-minb+1;
            }*/

        }

        cout<<max(K+V,V-V);
    
    return count;
}
int main(){

    
    int64_t t,K,V;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>K>>V;

        cout<<"Case #"<<i+1<<": "<<colourCount(K,V)<<endl;
    }


}