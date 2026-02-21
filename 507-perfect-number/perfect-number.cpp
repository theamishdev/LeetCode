class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int x=1;x<=num/2;x++){
            if(num%x==0){
                sum+=x;
            }
        }
        if(num==sum)return true;
        return 0;
    }
};