//find array is sorted or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
     if(a[i]<=a[i+1]){
         continue;
     }
     else{
         cout<<"not sorted";
         break;
     }
    }
    cout<<"sorted"<<endl;
}
    
