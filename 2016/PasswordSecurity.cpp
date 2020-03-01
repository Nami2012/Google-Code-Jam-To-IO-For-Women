#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string create_permutation (vector<string> passwords,int n){
    int flag =0;
    string permutation = ALPHABET;
    for(int j=1;j<=10000;j++){
        flag = 0;
    random_shuffle(permutation.begin(),permutation.end());
    for(int i=0;i<n;i++)
    {
        
    size_t found = permutation.find(passwords[i]); 
    if (found != string::npos) 
       { flag=1;
           break; }
    }
    if(flag==0 )
            return permutation;}

  return "IMPOSSIBLE";
    

}

int main(){
    int t,n;
    vector<string> passwords;
    cin>>t;

    for(int i=0;i<t;i++){
        passwords.clear();
        cin>>n;
        string p;
        for(int j=0;j<n;j++){
            cin>>p;
            passwords.push_back(p);

        }
        cout<<"Case #"<<i+1<<": ";
        cout<<create_permutation(passwords,n);
        


    }

}