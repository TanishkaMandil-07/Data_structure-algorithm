//check if array is same or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,3,2};
    vector<int>b={2,4,2,3};
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
         if(a==b){
             cout<<"Equal";
         }
         else{
             cout<<"not equal";
         }
    
}
