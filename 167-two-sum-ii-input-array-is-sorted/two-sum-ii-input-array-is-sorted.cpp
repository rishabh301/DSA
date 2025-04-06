class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mymap;
        map<int,int> index;
        for(int i=0;i<numbers.size();i++)
        {
            mymap[numbers[i]]++;
            index[numbers[i]]=i+1;
        }
        vector<int> final;
        for(int i=0;i<numbers.size();i++)
        {
            if(target>numbers[i])
            {
                int remain = target-numbers[i];
                //cout<<"remain is : "<<remain<<" i is :  "<<i<<endl;
                if(remain==numbers[i])
                {
                    if(mymap[numbers[i]]>=2)
                    {
                        final.push_back(i+1);
                        final.push_back(index[numbers[i]]);
                        return final;
                    }
                }
                else
                {

                    //cout<<"yes 0"<<endl;
                    if(mymap[remain]>=1)
                    {
                        //cout<<"yes 1:"<<endl;
                        final.push_back(i+1);
                        final.push_back(index[remain]);
                        return final;
                    }
                }
            }
            else
            {
                if(numbers[i]==target)
                {
                    if(target==0)
                    {
                        if(mymap[0]>1)
                        {
                            final.push_back(i+1);
                            final.push_back(index[numbers[i]]);
                            return final;
                        }
                    }
                    else
                    {
                        if(mymap[0]>=1)
                        {
                            final.push_back(i+1);
                            final.push_back(index[0]);
                            return final;
                        }
                    }
                }
                else
                {
                    int remain = target-numbers[i];
                    //cout<<"remain is : "<<remain<<endl;
                    if(remain==numbers[i])
                    {
                        if(mymap[numbers[i]]>1)
                        {
                            final.push_back(i+1);
                            final.push_back(index[numbers[i]]);
                            return final;
                        }
                    }
                    else
                    {
                        if(mymap[remain]>=1)
                        {
                            final.push_back(i+1);
                            final.push_back(index[remain]);
                            return final;
                        }
                    }
                }
            }
            
        }
        return final;
    }

};