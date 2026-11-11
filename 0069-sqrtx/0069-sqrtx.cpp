class Solution {
public:
    int mySqrt(int x) {
        int i = 0;
        int j = x;
        while(i<=j){
            int mid = i+(j-i)/2;
            long long m = (long long) mid;
            long long y = (long long) x;
         if(m*m == y) {
            return m;
        break;
        }
        else if(m*m > y) j = m-1;
        else i = m+1;
        
        }
        return j;
        
    }
};