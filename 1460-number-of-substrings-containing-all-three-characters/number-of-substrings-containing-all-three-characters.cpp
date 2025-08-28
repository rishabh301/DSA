class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        for(int i=0;i<s.length()-2;i++)
        {
            bool alpha = false;
            bool beta = false;
            bool charle = false; 

            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='a')
                {
                    alpha = true;
                }
                if(s[j]=='b')
                {
                    beta = true;
                }
                if(s[j]=='c')
                {
                    charle = true;
                }

                if(alpha && beta && charle)
                {
                    count+=(s.length()-(j+1))+1;
                    cout<<"count is : "<<count;
                    break;
                }
            }
        }
        return count;
    }
};
