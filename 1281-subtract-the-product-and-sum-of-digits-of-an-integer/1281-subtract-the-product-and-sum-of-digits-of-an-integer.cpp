class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0, product =1;
        int sub;
        while(n>0){
            int remainder = n%10;
            product *= remainder;
            sum += remainder;

            n /=10;
        }
        return sub=product-sum;

        
        
    }
};