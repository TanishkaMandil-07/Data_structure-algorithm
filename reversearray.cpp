// Reverse a std::array<T, N> ;

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
    reverse(a.begin(),a.end());
    cout<<"reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
