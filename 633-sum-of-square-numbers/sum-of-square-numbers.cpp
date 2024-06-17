class Solution {
public:
    // long long fast_pow(long long a, int b){
    //     long long result = 1;
    //     while(b > 0){
    //         if (b & 1)
    //             result *= a;
    //         a *= a;
    //         b >>= 1;
    //     }
    //     return result;
    // }
    bool judgeSquareSum(int c) {
        long long high = sqrt(c);
        long long low = 0;
        long long res = 0;
        while (low <= high){
            res = low*low + high*high;
            if (res == c)
                return true;
            else if (res < c)
                low++;
            else
                high--;
        }
        return false;
        

        // map<int,long long> powers;
        // int sqrt_c = sqrt(c);
        // for (int i = 0; i <= sqrt_c; i++){
        //     powers[i] = fast_pow(i,2);
        // }
        // for(int i = 0; i <= sqrt_c; i++){
        //     for (int j = 0; j <= sqrt_c; j++){
        //         if (powers[i] + powers[j] == c){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};