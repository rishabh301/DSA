class Solution {
public:
    int minDeletion(string s, int k) {
        map<char,int> mymap;
        map<char,int> m;
        vector<int> c;
        int unique_count = 0;
        for(int i=0;i<s.length();i++)
        {
            if(mymap[s[i]]==0)
            {
                unique_count++;
                mymap[s[i]]++;
            }
            else
            {
                mymap[s[i]]++;
            }
        }
        int sum = 0;
        if(unique_count <= k)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                if(m[s[i]]==0)
                {
                    c.push_back(mymap[s[i]]);
                    m[s[i]]=1;
                }
            }

            sort(c.begin(),c.end());
            int rem = unique_count-k;
            // cout<<"size of c : "<<c.size();
            // cout<<"remaining remove : "<<rem<<endl;

            for(int i=0;i<rem;i++)
            {
                sum+=c[i];
            }
            return sum;
        }
        return sum;
    }
};