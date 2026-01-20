class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)return x;
        int f=1;
        int l=x;;
        while(f<=l){
       int  m=f+(l-f)/2;
        if(m>x/m)l=m-1;
        else if(m<x/m)f=m+1;
        else return m;
        }
        return l;
    }
};