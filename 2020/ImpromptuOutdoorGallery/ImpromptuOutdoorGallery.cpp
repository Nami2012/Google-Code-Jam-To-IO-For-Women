#include<bits/stdc++.h>
using namespace std;

  
long long int area(vector<long long int> a, vector<long long int> b, vector<long long int> c){
    return a[0]*(b[1]-c[1]) + b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1]);
}

void computeArea(vector<vector<long long int>> &points){
    int n = points.size();long long int Area =LONG_LONG_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            //calculating for positive
            long long int posArea =Area; long long int negArea=Area;
            
            for(int k=0;k<n;k++){
                if(k!=i && k!=j){
                    //perform something
                    long long int a = area(points[i],points[j],points[k]);
                    
                    if(a>0) {
						posArea=min(posArea,a);
					}
					else {
						a=-a;
						negArea=min(negArea,a);
					}
                }
            }
            //cout<<posArea<<" ";
            if(((float)posArea)+negArea<9e18) {
				Area=min(Area,posArea+negArea);
			}
        
            //cout<<negArea<<" ";
            }
    }
    cout<<Area;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.precision(10); srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin>>t;int n;long long int u,v;
    for(int ti=0;ti<t;ti++){
        vector<vector<long long int>> points;
        cout<<endl<<"case #"<<ti+1<<": ";
        cin>>n;
        for(int i=0;i<n;i++){
            vector<long long int> point;
            cin>>u>>v;
            point.push_back(u);
            point.push_back(v);
            points.push_back(point);
        }
        computeArea(points);
    }
}