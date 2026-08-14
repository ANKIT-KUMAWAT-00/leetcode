class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0,trial=n/5;
        while(trial!=0){
            sum+=trial;
            trial=trial/5;
        }
    return sum;
    }
};