// find subarray with sum k
// https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mp;
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum==target){
                return {0+1, i+1};
            }
            int k = sum-target;
            auto it = mp.find(k);
            if(it == mp.end()){
                mp[sum] = i;
            }else{
                return {mp[k]+2, i+1};
            }
        }
        return {-1};
    }
};