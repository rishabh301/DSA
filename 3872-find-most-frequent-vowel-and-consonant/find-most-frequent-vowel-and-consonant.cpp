class Solution {
public:
    int maxFreqSum(string s) {
        int vowel = 0;
        int conso = 0;
        map<char,int> mymap;

        for(int i=0;i<s.length();i++)
        {
            mymap[s[i]]++;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(mymap[s[i]]>vowel)
                {
                    vowel = mymap[s[i]];
                }
            }
            else
            {
                if(mymap[s[i]]>conso)
                {
                    conso = mymap[s[i]];
                }
            }
        }

        return vowel+conso;
    }
};