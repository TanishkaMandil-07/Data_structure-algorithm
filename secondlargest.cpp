//find second largest

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    int largest=0;
    int slargest=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
     if(a[i]>largest){
         slargest=largest;
         largest=a[i];
     }
     }
    cout<<"slargest is "<<slargest<<endl;
}
    
