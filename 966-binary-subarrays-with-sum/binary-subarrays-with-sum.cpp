class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int sizeone = 0;
        int sizetwo = 0;

        int l = 0;
        int r = 0;
        
        int sum = 0;

        while(r<nums.size())
        {
            sum = sum+nums[r];
            if(sum<=goal)
            {
                sizeone = sizeone + (r-l)+1;
                r++;
            }
            else
            {
                while(sum>goal)
                {
                    sum = sum - nums[l];
                    l++;
                }

                if(sum<=goal)
                {
                    sizeone = sizeone + (r-l)+1;
                    r++;
                }
            }
        }
        if(goal==0)
        {
            return sizeone;
        }
        else
        {
            sum = 0;
            l=0;
            r=0;

            goal=goal-1;

            while(r<nums.size())
            {
                sum = sum+nums[r];
                if(sum<=goal)
                {
                    sizetwo = sizetwo + (r-l)+1;
                    r++;
                }
                else
                {
                    while(sum>goal)
                    {
                        sum = sum - nums[l];
                        l++;
                    }

                    if(sum<=goal)
                    {
                        sizetwo = sizetwo + (r-l)+1;
                        r++;
                    }
                }
            }        
        }
        
        return sizeone-sizetwo;
        
    }
};