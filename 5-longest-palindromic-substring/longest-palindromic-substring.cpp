class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start=0,end=0,low,high;
        for(int i=0;i<n;i++)
        {
            low=i-1;
            high=i;
            while(low>=0 && high<n && s[low]==s[high]){
                if(end<high-low+1){
                    end=high-low+1;
                    start=low;
                }
                low--;
                high++;
            }
            low=i-1;
            high=i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                if(end<high-low+1){
                    end=high-low+1;
                    start=low;
                }
                low--;
                high++;
            }
        }
        if(end==0)return s.substr(start,1);
    return s.substr(start,end);
    }
};