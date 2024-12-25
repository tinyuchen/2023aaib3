class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;  //1 *x *x *x ...
        if(n<0){    //遇到負的，就負負得正。同時，把 x 變成分母。
            n=-n;
            x=1/x;
        }
        if(n%2==0){
            double now = myPow(x,n/2);
            return now*now;
        }
        else{
            double now = myPow(x,n/2);
            return now*now*x;
        }
/*
        double ans=1;
        if(n>0){
            for(int i=0;i<n;i++)
            ans*=x;
        }
        else if(n<0){
            for(int i=0;i<-n;i++){
                ans*=1/x;
            }
        }
        return ans;
*/
    }
};