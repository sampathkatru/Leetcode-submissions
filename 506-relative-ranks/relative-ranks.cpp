class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> que;
        for(int i:score) que.push(i);
        unordered_map<int,int> maap;
         vector<string> st;
        for(int i=0;i<score.size();i++)
        {
            maap[que.top()]=i;
            que.pop();
        }
        for(int i=0;i<score.size();i++)
        {
            if(maap[score[i]]==0) st.push_back("Gold Medal");
            else if(maap[score[i]]==1) st.push_back("Silver Medal");
            else if(maap[score[i]]==2) st.push_back("Bronze Medal");
            else st.push_back(to_string(maap[score[i]]+1));
        }
        return st;
        
    }
};