class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> answer;
        if(nums.size()<4)
        {
            return answer;
        }
        sort(nums.begin(),nums.end());
        map<map<int,int>,int> mymap;

        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                int l = j+1;
                int r = nums.size()-1;

                while(l<r)
                {
                    long long sum = (long long)nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target)
                    {
                        map<int,int> p;
                        p[nums[i]]++;
                        p[nums[j]]++;
                        p[nums[l]]++;
                        p[nums[r]]++;
                        if(mymap[p]==0)
                        {
                            vector<int> vec;
                            vec.push_back(nums[i]);
                            vec.push_back(nums[j]);
                            vec.push_back(nums[l]);
                            vec.push_back(nums[r]);
                            answer.push_back(vec);
                            mymap[p]=1;
                        }
                        l++;
                    }
                    else
                    {
                        if(sum>target)
                        {
                            r--;
                        }
                        else
                        {
                            l++;
                        }
                    }
                }
            }
        }
        return answer;
    }
};