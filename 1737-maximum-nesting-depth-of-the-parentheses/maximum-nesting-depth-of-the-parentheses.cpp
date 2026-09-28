class Solution {
public:
    int maxDepth(string s) 
    {
        int cnt=0;
        int maxd=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
                cnt++;
                maxd=max(maxd,cnt);
            }
            if(s[i]==')')cnt--;
        }
        return maxd;
    }
};