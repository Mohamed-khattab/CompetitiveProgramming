class Solution {
public:
    double power (double x , int n ){
        // base case ;
        if( n == 0)  return 1 ;

        if( n < -2000000000 && abs(x) != 1.00000)
        return 0.00000 ;


        if(n<0 ){
             n  = abs(n) ;
             x = 1/x ;
        }
        return pow(x , n );

        // //transiotn
        // if(n %2 == 0 )
        //     return power(x*x, n/2) ;
        // else
        //     return x*power(x , n-1) ;
        return power(x, n/2)*power(x, ceil(n/2)) ;
    }

    double myPow(double x, int n) {
        return power(x, n ) ;
    }
};
