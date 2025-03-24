class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int max_allowed = n*n;
        int prod = 1;
        int index = 1;


        while(prod<=maxWeight && index<=(n*n))
        {
            prod = w * index;
            //cout<<"prod is : "<<prod<<endl;

            if(prod>maxWeight)
            {
                return index-1;
            }
            
            if(prod == maxWeight)
            {
                return index;
            }
            index++;
        }
        return index-1;

    }
};