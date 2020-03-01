 #include<iostream>
 #include<string.h> 
 #include <bits/stdc++.h> 
#include <chrono> 
 using namespace std; 


int t, A, B,a,b,y;

void population(int y){
    int a1,b1,K,newA,newB,rem;//1%of both;
    for(y;y>0;y--)
    {
    a1 = A*0.01;
    b1 = B*0.01;
    K = ((A>B)?B:A)*0.02;
    newA = K*a*0.01;
    newB = K*b*0.01;
    rem = K-(newA+newB);
    
     A += rem/2 + newA;
    if (rem&1)
        {
         B += (rem/2 +1)+newB;   
        }
    else
    {
        B+= (rem/2)+ newB;
    }
    A -= a1;
    B -= b1;}
    
}

int main() {
       string str;
      cin >> t;
    for(int i=0;i<t;i++)
    { 
      cin>>A>>B>>a>>b>>y;
        
      population(y);
       
        cout<<endl<<"Case #"<<i+1<<": "<<A<<" "<<B;
         } 
 
      return 0;
    }
/* 	
Output
 
4
12345 12890 10 13 0
12345 12890 10 13 1
12345 12890 10 13 100
12345 12890 10 13 5051

  
Case #1: 12345 12890
Case #2: 12341 12889
Case #3: 11993 12676
Case #4: 3099 3199
*/
      