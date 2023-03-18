#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
  while(t--){
      int a, b,c , d ;
      cin >> a>>b>>c>>d ;
      if(d < b )
      {
          cout <<"-1"<<endl;
          continue;
      }
      int count =0 ;
      count += d-b ;
      a += count ;
      if(c>a)
      {
          cout <<"-1"<<endl;
          continue;
      }
      count += abs(a-c) ;
      cout <<count <<endl;

  }

    return 0;
}
