//  Find Majority Element: Find the element that appears more than n/2 times.

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
    int count=n/2;
    cout<<count<<endl;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>count){
            cout<<a[i];
        }
    }
    
    cout<<"no majority element"

}
