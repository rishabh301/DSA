class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0;
        int r = 0;

        int max_length = 0;
        bool flag = false;

        while(r<s.length())
        {
            int diff = abs(s[r]-t[r]);

            if(maxCost>=diff)
            {
                flag = true; 
                maxCost = maxCost-diff;
                r++;
            }
            else
            {
                if(flag)
                {
                    if(r-l>max_length)
                    {
                        max_length = r-l;
                    }
                    flag=false;
                }
                if(l==r)
                {
                    l++;
                    r++;
                }
                else
                {
                    while(maxCost<diff)
                    {
                        maxCost = maxCost + abs(s[l]-t[l]);
                        l++;
                        if(l==r)
                        {
                            break;
                        }
                    }
                }
                
            }
        }
        if(flag)
        {
            if(r-l>max_length)
            {
                max_length = r-l;
            }
        }
        return max_length;
    }
};