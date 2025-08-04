class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int result=0,i=0,j=0;
        unordered_map<int,int> maap;
        while(i<fruits.size())
        {
            maap[fruits[i]]++;
            while(maap.size()>2)
            {
                if(maap[fruits[j]]==1) maap.erase(fruits[j]);
                else maap[fruits[j]]--;
                j++;
            }
            i++;
            result=max(result,i-j);

        }
        return result;
    }
};