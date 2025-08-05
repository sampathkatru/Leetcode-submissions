class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,maxi=0,count=0,flag=-1;
        while(i<nums.size())
        {
            if(nums[i]==1) count++;
            else if(nums[i]==0 && flag==-1 && count!=0) flag=i;
            else if(nums[i]==0 && flag!=-1)
            {
                maxi=max(maxi,count);
                while(j<flag)
                {
                    count-=nums[j];
                    j++;
                }
                flag=i;
            }
            i++;
        }
        if(count==nums.size()) count--;
        maxi=max(maxi,count);
        return maxi;

    }
};