//find pair which sum equal to target

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    vector<int>result;
    int target;
      cout<<"enter target"<<endl;
      cin>>target;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());;
    int left=0;
    int right=n-1;
    int sum=0;
        while(left<right){
            sum=a[left]+a[right];
            if(sum==target){
               result.push_back(left);
               result.push_back(right);
               break;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
}
    
