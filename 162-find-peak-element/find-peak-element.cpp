class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int> temp(nums.size()+2);
        temp[0]=-1;
        for(int i=0;i<nums.size();i++) temp[i+1]=nums[i];
        temp[nums.size()+1]=-2147483648;
        for(int i=1;i<=nums.size();i++)
        {
            if(temp[i-1]<temp[i]&&temp[i]>temp[i+1]) return i-1;
        }
        return 0;
    }
};