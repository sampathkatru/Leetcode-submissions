class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>>data;

        for(int i=0;i<n;i++){
            data.push_back({score[i],i});
        }
        sort(data.begin(),data.end(),greater<pair<int,int>>());

        vector<string>result(n);
        for(int i=0;i<n;i++){
            if(i==0){
                result[data[i].second]="Gold Medal";
            }
            else if(i==1){
                result[data[i].second]="Silver Medal";
            }
            else if(i==2){
                result[data[i].second]="Bronze Medal";
            }
            else{
                result[data[i].second]=to_string(i+1);
            }
        }
        return result;
    }
};