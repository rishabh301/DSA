class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        set<int> s;
        //created min heap priority queue to sort the array !
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        for (auto x : s) 
        {
            pq.push(x);
        }

        int maxx = 0;
        int count = 1;
        while(pq.size()!=0)
        {
            int t = pq.top();
            pq.pop();
            if(pq.size()!=0)
            {
                if(t+1==pq.top())
                {
                    count++;
                }
                else
                {
                    count=1;
                }
            }
            if(count>maxx)
            {
                maxx=count;
            }            
        }
        return maxx;
    }
};