class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total==0 && k==0) return 0;
        int i=0,j=0,zero=0;
        int maxlen=0;
        while(j<nums.size())
        {
            if(nums[j]==0) zero++;
            while(zero>k)
            {

                if(nums[i]==0) zero--;
                i++;
            }
            maxlen=max(maxlen,j-i);
            j++;
        }
        return maxlen+1; 
        
    }
};