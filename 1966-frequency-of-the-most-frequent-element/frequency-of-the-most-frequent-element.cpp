class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int max_count = 0;

        int l = nums.size()-1;
        int r = nums.size()-1;

        while(r>=0)
        {
            int diff = nums[l]-nums[r];
            //cout<<"diff is : "<<diff<<endl;
            if(k>=diff)
            {
                if((l-r)>max_count)
                {
                    max_count = l-r;
                }
               // cout<<"max_count is "<<max_count<<endl;
                k = k - diff;
                // cout<<"k is : "<<k<<endl;
              //  cout<<endl;
                r--;
            }
            else
            {
                int d = nums[l]-nums[l-1];
                //updating k ]
                k = k + ((l-r)-1)*d;
                l--;
            }
        }

        return max_count+1;
    }
};