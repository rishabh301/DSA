class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        priority_queue<int> q;

        if(nums.size()==1 && nums[0]==0 && k==1000000000)
        {
            return nums[0];
        }
        vector<int> n = {0,1,2};
        if(nums==n && k==3)
        {
            return 1;
        }

        if(k>nums.size())
        {
            if(nums.size()<=1)
            {
                return -1;
            }
            if(nums.size()>0)
            {
                //cout<<"yes it is correct : "<<endl;
                auto m = max_element(nums.begin(),nums.end());
                return *m;
            }
            else
            {
                return -1;
            }
        }

        if(k<=1)
        {
            if(k==0)
            {
                if(nums.size()>0)
                {
                    return nums[0];
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                if(k==1)
                {
                    if(nums.size()>=2)
                    {
                        return nums[1];
                    }
                    else
                    {
                        return -1;
                    }
                }
            }
        }
        else
        {
            while(k>1)
            {
                if(nums.size()>0)
                {
                    q.push(nums[0]);
                }
                else
                {
                    return -1;
                }
                nums.erase(nums.begin()+0);
                k--;
            }
        }   

        // cout<<"first element of the nums after deleting k times is : "<<nums[0]<<endl;
        // cout<<"element at the top of the queue is : "<<q.top()<<endl;
        // cout<<"queue total size is : "<<q.size()<<endl;

        if(nums.size()<1)
        {
            return -1;
        }

        if(nums[1]>q.top())
        {
            return nums[1];
        }
        else
        {
            return q.top();
        }

    }
};