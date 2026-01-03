class Solution {
public:
    int numOfWays(int n) {
    const int MOD = 1e9 + 7;
    long long dif=6;
    long long same=6;
    for(int i=2;i<=n;i++)
    {
       long long new_dif=(2*dif+2*same)%MOD;
        long long new_same=(2*dif+3*same)%MOD;
        dif=new_dif;
        same=new_same;
    }
    return (dif+same)%MOD;

        
    }
};