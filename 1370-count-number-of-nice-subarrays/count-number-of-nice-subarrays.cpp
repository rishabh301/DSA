class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }   
        }

        int sizeone = 0;
        int sizetwo = 0;

        int l = 0;
        int r = 0;

        int sum = 0;

        while(r<nums.size())
        {
            sum=sum+nums[r];
            if(sum<=k)
            {
                sizeone = sizeone + (r-l)+1;
                r++;
            }
            else
            {
                while(sum>k)
                {
                    sum = sum - nums[l];
                    l++;
                }

                if(sum<=k)
                {
                    sizeone = sizeone + (r-l)+1;
                    r++;
                }
            }
        }

        if(k==0)
        {
            return sizeone;
        }
        else
        {
            sum = 0;
            l = 0;
            r = 0;

            k = k-1;

            while(r<nums.size())
            {
                sum=sum+nums[r];
                if(sum<=k)
                {
                    sizetwo = sizetwo + (r-l)+1;
                    r++;
                }
                else
                {
                    while(sum>k)
                    {
                        sum = sum - nums[l];
                        l++;
                    }

                    if(sum<=k)
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