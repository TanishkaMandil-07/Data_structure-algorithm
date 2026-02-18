//remove element from a array

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,3,5,7};
    int element=3;
    a.erase(remove(a.begin(),a.end(),3),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
}
    
