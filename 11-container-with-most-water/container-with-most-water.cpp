class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;

        int maxx = 0;
        while(l<r)
        {
            int store = min(height[l],height[r])*(r-l);
            if(store>maxx)
            {
                maxx=store;
            }
            if(height[l]>height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return maxx;
    }
};