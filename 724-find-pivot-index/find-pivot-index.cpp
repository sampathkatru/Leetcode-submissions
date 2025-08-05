class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> l=nums,r=nums;
        for(int i=1,j=nums.size()-2;i<nums.size();i++,j--)
        {
            l[i]+=l[i-1];
            r[j]+=r[j+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(l[i]==r[i]) return i;
        }
        return -1;
        
    }
};