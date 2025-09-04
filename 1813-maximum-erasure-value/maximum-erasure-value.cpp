class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int l = 0;
        int r = 0;

        int maxel = 0;

        unordered_map<int,int> mymap;

        while(r<nums.size() && l<nums.size())
        {
            if(mymap[nums[r]]==0)
            {
                sum+=nums[r];
                mymap[nums[r]]=1;
                r++;
                cout<<sum<<endl;
            }
            else
            {
                //cout<<"num[r] is :"<<nums[r]<<endl;
                if(sum>maxel)
                {
                    maxel = sum;
                }
                while(nums[l]!=nums[r])
                {

                    sum = sum-nums[l];
                    mymap[nums[l]]=0;
                    l++;
                }
                sum = sum-nums[l];
                l++;
                mymap[nums[r]]=0;
                //cout<<"sum is : "<<sum<<endl;
                cout<<endl;
            }
            
        }
        if(sum>maxel)
        {
            maxel = sum;
        }
        return maxel;
    }
};