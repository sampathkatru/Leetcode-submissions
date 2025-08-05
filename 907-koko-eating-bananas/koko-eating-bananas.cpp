class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int result=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long total=0;
            for(int i:piles) total+=(i+mid-1)/mid;
            if(total<=h)
            {
                result=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return result;
        
    }
};