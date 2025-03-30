class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=i;
        }

        vector<int> final;
        int max = -1;
        if(s.length()==0)
        {
            return final;
        }
        max=m[s[0]];
        string str="";
        for(int i=0;i<s.length();i++)
        {
            str+=s[i];
            if(m[s[i]]>max)
            {
                max=m[s[i]];
            }
            // cout<<"str is : "<<str<<endl;
            // cout<<"i is "<<i<<"max is "<<max<<endl;
            if(i==max)
            {
                final.push_back(str.length());
                str="";
                if(i+1<s.length())
                {
                    max=m[s[i+1]];
                }
                else
                {
                    break;
                }
                // cout<<"max is : "<<max<<endl;
            }
        }
        return final;
    }
};