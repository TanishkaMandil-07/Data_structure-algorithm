
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a={1,2,3,4};
    int low=0;
    vector<int>res;

    while(low<a.size()){

        int rm=1, lm=1;

        // right product is side
        for(int i=low+1;i<a.size();i++){
            rm*=a[i];
        }

        // left product is side hoga
        for(int i=low-1;i>=0;i--){
            lm*=a[i];
        }

        int tm = rm * lm;
        res.push_back(tm);

        low++;
    }

    for(int x:res) cout<<x<<" ";
}
