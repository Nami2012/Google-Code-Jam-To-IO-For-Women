

 #include<iostream>
 #include<string.h> 
 using namespace std; 
 
    void decorate(const std::string& input)
    {
        int l = input.size();
        cout<<"+";
        for(int i=0;i<=input.size()+1;i++){
            cout<<"-";
        }
        cout<<"+"<<endl;

        cout<<"| "<<input<<" |"<<endl;
        
        cout<<"+";
        for(int i=0;i<=input.size()+1;i++){
            cout<<"-";
        }

        cout<<"+"<<endl;
        

    }
 
 
 // since cin and cout are both in namespace std, this saves some text
    int main() {
       string str;
      int t, n, m;
      cin >> t; // read t. cin knows that t is an int, so it reads it as such.
      getline(cin,str);
       for(int i=1;i<=t;i++)
    { 
        getline(cin, str); 
        cout << "Case #" << i << ": " << endl;
        decorate(str);
    } 
      return 0;
    }
