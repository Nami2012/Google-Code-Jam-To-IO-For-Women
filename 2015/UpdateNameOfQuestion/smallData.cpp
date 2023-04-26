#include<iostream>
#include<cstdlib>

using namespace std;

int colourCount(int K,int V){
    int count =0;
    for(int x=0;x<=K;x++){
        for(int y=0;y<=K;y++){
            for(int z=0;z<=K;z++){
                if(abs(x-y) <=V && abs(y-z)<=V && abs(x-z)<=V){
                    count++;
                }
            }
        }
    }
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