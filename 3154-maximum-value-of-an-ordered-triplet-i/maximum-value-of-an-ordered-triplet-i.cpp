class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long t = -1;
        long long n;
        for(int i=0;i<=nums.size()-3;i++)
        {
            for(int j=i+1;j<=nums.size()-2;j++)
            {
                if(nums[i]<nums[j])
                {
                    continue;
                }
                for(int k=j+1;k<=nums.size()-1;k++)
                {
                    n = 1LL*(nums[i]-nums[j])*nums[k];
                    if(n>t)
                    {
                        t=n;
                    }
                }
            }
        }
        if(t==-1)
        {
            return 0;
        }
        else
        {
            return t;
        }
    }
};