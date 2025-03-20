class Solution {
public:
    bool isPowerOfTwo(int n) {
       long long int pow=1;

        if(n==1) return true;
        while(pow<n){
            if(2*pow==n){
                return true;
                break;
            }else{
                pow*=2;
            }
        }
        return false;
    }
};