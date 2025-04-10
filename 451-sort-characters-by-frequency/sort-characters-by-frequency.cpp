class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mymap;
        for(int i=0;i<s.length();i++)
        {
            mymap[s[i]]++;
        }

        string str=s;
        sort(str.begin(),str.end());
        str.erase(unique(str.begin(),str.end()),str.end());
        set<int> myset;
        vector<int> under;

        for(int i=0;i<str.length();i++)
        {
            myset.insert(mymap[str[i]]);
        }
        for(int x:myset)
        {
            //cout<<"x is : "<<x<<endl;
            under.insert(under.begin()+0,x);
        }

        //cout<<under.size()<<endl;
        string ans = "";

        for(int i=0;i<under.size();i++)
        {
            //cout<<"i is : "<<under[i]<<endl;
            for(int j=0;j<str.length();j++)
            {
                if(under[i]==mymap[str[j]])
                {
                    for(int k=0;k<mymap[str[j]];k++)
                    {
                        ans+=str[j];
                    }

                }
            }        
        }
        return ans;
    }
};