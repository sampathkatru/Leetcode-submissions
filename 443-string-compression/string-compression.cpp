class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int count=1;
        chars.push_back('/0');
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]!=chars[i+1]) 
            {
                s+=chars[i];
                if(count!=1) s+=to_string(count);
                count=1;
            }
            else count++;
        }
        for(int i=0;i<s.size();i++)
        {
            chars[i]=s[i];
        }
        return s.size();
        
    }
};