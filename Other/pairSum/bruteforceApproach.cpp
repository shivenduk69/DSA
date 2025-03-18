#include<iostream>
#include<vector>
using namespace std;
vector<int> sumTarget(vector<int> nums, int target){
    int size = nums.size();
    vector <int> ans;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((nums[i] + nums[j])==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main(){
    vector <int> nums = {4, 2, 3, 6, 1, 7};
    int target = 5;
    vector<int> ans=sumTarget(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}