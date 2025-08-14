class Solution {
public:
    string largestGoodInteger(string num) {
        int l=0,r=1,n=num.size();
        string result="-1";
        while(l<n-2)
        {
            if(num[l]==num[l+1])
            {
                l++;
                string temp;
                if(num[l]==num[l+1]) 
                {       
                    for(int i=0;i<3;i++) temp+=num[l];
                }
                if(temp.size()>2 && stoi(temp)>stoi(result)) result=temp;
            }
            l++;
        }
        return (result!="-1" ? result:"");
        
    }
};