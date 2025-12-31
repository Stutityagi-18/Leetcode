class Solution {
public:
    void func(int index,vector<string>& ans,string& num,long long curr,long long last_op,string exp,int target)
    {
        if(index==num.length())
        {
            {
                if(curr==target)
                {
                    ans.push_back(exp);
                }
                return;
            }
            
        }
        for(int i=index;i<=num.length()-1;i++)
        {
            if(i>index && num[index]=='0')
            {
                break;
            }
            string cur_st=num.substr(index,i-index+1);
            long long currNum=stoll(cur_st);
            if(index==0)
            {
                func(i+1,ans,num,currNum,currNum,cur_st,target);
            }
            else
            {
                //for addition
                func(i+1,ans,num,curr+currNum,currNum,exp+'+'+cur_st,target);
                //for substraction
                func(i+1,ans,num,curr-currNum,-currNum,exp+'-'+cur_st,target);
                //for multiplication
                func(i+1,ans,num,curr-last_op+last_op*currNum,last_op*currNum,exp+'*'+cur_st,target);

            }
        }
    }
    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        func(0,ans,num,0,0 ,"",target);
        return ans;
        
    }
};