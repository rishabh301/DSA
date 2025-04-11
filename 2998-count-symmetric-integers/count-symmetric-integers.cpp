class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            string str=to_string(i);
            if(str.length()%2==0)
            {
                int k=str.length();
                int sum1=0;
                int sum2=0;
                for(int j=0;j<k/2;j++)
                {
                    int n=str[j]-'0';
                    sum1+=n;
                }
                for(int l=k/2;l<str.length();l++)
                {
                    int n=str[l]-'0';
                    sum2+=n;
                }
                if(sum1==sum2)
                {
                    count++;
                }
                    
            }
        }
        return count;
    }
};