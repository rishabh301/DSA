class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0;i<s.length();i++)
        {
            int t = int(s[i])-97;
            sum+=(26-t)*(i+1);
        }
        return sum;
    }

};