class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> support; 

        int l = 0;
        int r = 0;
        int maxx = INT_MIN;

        while(r<nums.size())
        {
            if(nums[r]==1)
            {
                r++;
            }
            else //nums[r]=0
            {
                if(k!=0)
                {
                    k--;
                    support.push_back(r);
                    nums[r]=1; // bit ko flip kar diya 
                    r++;
                }
                else // k is value 0 hogyi hai abb tak 
                {
                    // now find maximum consecutive one in a particular window 
                    if((r-l)>maxx)
                    {
                        maxx=r-l;
                    }


                    if(support.size()>=1)
                    {
                        int index = support[0];
                        nums[index]=0;
                        l = index+1;
                        r = l;
                        support.erase(support.begin()); // support ke pehle element ko delete
                        k=k+1;
                        // cout<<"value of l is : "<<l<<endl;
                        // cout<<"value of r is : "<<r<<endl;
                    }
                    else
                    {
                        r=l;
                        l++;
                        r++;
                    }
                }
            }
        }
        // cout<<"l is at : "<<l<<endl;
        // cout<<"r is at : "<<r<<endl;
        if(r-l>maxx)
        {
            maxx=r-l;
        }
        return maxx;
    }
};