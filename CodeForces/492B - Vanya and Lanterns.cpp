#include <iostream>
#include  <algorithm>
using namespace std ;
int main() {
    int n, l ; cin >>n>>l ;
    int  a[n];
    for (int i = 0; i <n  ; ++i) {
        cin >>a[i] ;
    }
    sort(a , a+n) ;
    int red  = 2*max(a[0],l-a[n-1]);
    for (int i = 1; i <n ; ++i) {
        red = max(red , (a[i] - a[i-1])) ;
    }
    printf("%.10f\n",red/2.);
    return 0;
}
