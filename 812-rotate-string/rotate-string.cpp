class Solution {
public:
    bool rotateString(string s, string goal) {
         bool flag=false;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[0];
            s.erase(0, 1);
            s+=ch;
            if(s==goal)
            {
                return true;
            }
        }
        return flag;
    }
};