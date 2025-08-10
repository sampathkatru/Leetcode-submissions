class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        if(nums[0]!=0)return 0;
        int n = nums.size();
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans&=nums[i];
            }  
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};