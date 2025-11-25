class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long nn=n;
        if(nn<0)
        {
            nn=-1*nn;//we are making it positive
        }
        while(nn>0)
        {
            if(nn%2==1)//if the power is odd
            {
                ans=ans*x;
                nn=nn-1;
            }
            else//power is even
            {
                x=x*x;
                nn=nn/2;
            }
        }
        if(n<0)//(x^(-ve ))
        {
            ans=(double)(1.0)/(double)(ans);//because (x^(-ve ))=1/(x^(+ve))
        }
        return ans;
    }
};