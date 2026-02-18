//find duplicate in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector-";
    cin>>n;
    vector<int>a(n);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"Duplicates are: ";
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}
