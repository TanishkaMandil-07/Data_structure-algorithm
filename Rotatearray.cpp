// Rotate Array to the Left by k Positions
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a={1,2,3,4,5,6};
    int k=2,n=a.size();

    k=k%n;

    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    reverse(a.begin(),a.end());

    for(int x:a) cout<<x<<" ";
}
