//find missing number 1 to n;

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,4,5,6};
    int n=6;
   int totalsum=n*(n+1)/2;
   int sum=0;
   for(int i=0;i<a.size();i++){
       sum=sum+a[i];
   }
   int missingvalue=abs(totalsum-sum);
   cout<<"missingvalue is "<<missingvalue;
   
}
    
