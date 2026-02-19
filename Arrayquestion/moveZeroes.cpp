// Move Zeroes to End: Move all zeroes in an array to the end while maintaining the order of non-zero elements.

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
    }
    a.erase(remove(a.begin(),a.end(),0),a.end());
    for(int i=0;i<count;i++){
        a.push_back(0);
    }
     for(int i=0;i<n;i++){
         cout<<a[i]<<"";
     }
    

}
