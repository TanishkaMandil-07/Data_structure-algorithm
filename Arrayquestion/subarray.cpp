// subarray with given sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a={1,4,20,3,10,5};
    int target=33;

    int sum=0,l=0;

    for(int r=0;r<a.size();r++){
        sum+=a[r];

        while(sum>target){
            sum-=a[l];
            l++;
        }

        if(sum==target){
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not Found";
}
