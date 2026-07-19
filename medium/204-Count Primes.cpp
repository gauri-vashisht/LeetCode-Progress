class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if (n==0 || n==1)
            return 0;
        else{
            for(int i=2;i<n;i++){
                for(int j=2;j*j<=i;j++){
                    if(i%j==0){
                        continue;
                        if(i/j!=j){
                            break;
                        }
                    }
                }
            }
            return count;
        }
        
    }
};