#include<iostream>
#include<cmath>

using namespace std;

int digits(int num){
    float ans = log10(9000);
    
    int curr = 9000;
    curr -= num;
    while(curr>0){
        ans += log10(curr);
        curr -= num;
    }
    return ceil(ans);
}

void multifactorial(int numdigits){
        int i = 1;
        while(i<=9000 && numdigits<=digits(i))
            i++;
        if(i>9000)
            { cout<<"...";
                return;}
        
        cout<<"IT'S OVER 9000";
        while(i--){
            cout<<"!";
        }
        

}

int main(){
    int t,d;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d;
        cout<<"case #"<<i+1<<": ";
        multifactorial(d);
        cout<<endl;
    }

}