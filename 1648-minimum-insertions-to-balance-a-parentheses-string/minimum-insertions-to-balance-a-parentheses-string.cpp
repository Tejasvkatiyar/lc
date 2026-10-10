class Solution {
public:
    int minInsertions(string s) {
        int cnt=0,ans=0;
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')cnt++;
            else 
            {
                if(i+1<n & s[i+1]==')')
                {
                    i++;
                }
                else
                {
                    ans++;
                }
                if(cnt)
                {
                    cnt--;
                }
                else
                {
                    ans++;
                }
            } 
        }  
        return ans+cnt*2;
    }
};