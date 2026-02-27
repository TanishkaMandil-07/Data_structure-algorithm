//https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
        int res=INT_MIN;
        int n=fruits.size();
        unordered_map<int,int>f;
        for(high=0;high<n;high++){
            f[fruits[high]]++;
            int size=f.size();
            while(f.size()>2){
               f[fruits[low]]--;
               if(f[fruits[low]]==0){
                f.erase(fruits[low]);
               }
               low++;
            }
            int len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};
