class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0;i<s.length();i++)
        {
            
            if(isalpha(s[i]))
            {
                if(islower(s[i]))
                {
                    str+=s[i];
                }
                else
                {
                    str+=tolower(s[i]);
                }
            }
            if(isdigit(s[i]))
            {
                str+=s[i];
            }
        }

       //cout<<"str is : "<<str<<endl;

        int i=0;
        int j=str.length()-1;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
               // cout<<i<<"&"<<j<<endl;
                return false;
            }
        }
        return true;
    }
};