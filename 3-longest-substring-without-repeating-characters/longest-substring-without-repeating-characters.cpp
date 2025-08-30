class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = 0;
        map<char,int> mymap;

        int l = 0;
        int r = 0;

        while(r<s.length())
        {
            if(mymap[s[r]]==0)
            {
                mymap[s[r]]=1;
                r++;
            }
            else
            {
                //updating value of size 
                if((r-l)>size)
                {
                    size = r-l;
                }

                //updating value of l 
                while(s[l]!=s[r])
                {
                    mymap[s[l]]=0;
                    l++;
                }
                l++;

                //updating the mymap
                mymap[s[r]]=0;
            }
        }

        if((r-l)>size)
        {
            size = r-l;
        }

        return size;
    }
};