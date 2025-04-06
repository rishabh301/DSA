class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        sort(special.begin(),special.end());
        int max = 0;
        for(int i=0;i<special.size();i++)
        {
            if(i==0)
            {
                if(special[i]-bottom > max)
                {
                    max = special[i]-bottom;
                }
                if(special.size()==1)
                {
                    if(top-special[0]>max)
                    {
                        max=top-special[0];
                    }
                }
            }
            else
            {
                if((special[i]-(special[i-1]))>max)
                {

                    max=special[i]-(special[i-1]+1);
                }
                if(i==special.size()-1)
                {
                    if(top-special[i]>max)
                    {
                        max=top-special[i];
                    }   
                }
            }
        }
        return max;
    }
};