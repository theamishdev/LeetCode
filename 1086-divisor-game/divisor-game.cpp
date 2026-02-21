class Solution {
public:
    bool divisorGame(int n) {
        int count=0;
        while(n>1){
        for(int x=1;x<=n;x++){
            if(n%x==0){
                count++;
                n-=x;
                break;
            }
        }}
        return !(count%2==0);
    }
};