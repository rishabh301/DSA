class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<map<char,int>> m;
        vector<vector<string>> final;
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            map<char,int> mymap;
            for(int j=0;j<s.length();j++)
            {
                mymap[s[j]]++;
            }
            m.push_back(mymap);
        }

        for(int i=0;i<strs.size();i++)
        {
            if(strs[i]!="&3")
            {
                vector<string> str;
                for(int j=0;j<strs.size();j++)
                {
                    if(m[i]==m[j])
                    {
                        str.push_back(strs[j]);
                        strs[j]="&3";
                    }
                }
                final.push_back(str);
            }
        }
        return final;
    }
};