class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,zero=0;
        int maxlen=0;
        while(j<nums.size())
        {
            if(nums[j]==0) zero++;
            while(zero>1)
            {

                if(nums[i]==0) zero--;
                i++;
            }
            maxlen=max(maxlen,j-i);
            j++;
        }
        return maxlen; 
        
    }
};