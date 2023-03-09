#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        bool valid = true;
       transform(s.begin(), s.end(), s.begin(), ::tolower); // convert to lowercase
       if (s[0] != 'm') { // check if starts with 'm'
           valid = false;
       } else {
           int pos = 0;
           while (pos < n && (s[pos] == 'm' )) { // skip any additional 'm's
               pos++;
           }
           if (pos >= n || (s[pos] != 'e')) { // check if next letter is 'e'
               valid = false;
           } else {
            //   pos++;

               while (pos < n && (s[pos] == 'e')) { // skip any additional 'e's
                   pos++;
               }
               if (pos >= n || (s[pos] != 'o' )) { // check if next letter is 'o'
                   valid = false;
               } else {
                //   pos++;

                   while (pos < n && (s[pos] == 'o' )) { // skip any additional 'o's
                       pos++;
                   }
                   if (pos >= n || (s[pos] != 'w')) { // check if next letter is 'w'
                       valid = false;
                   } else {
                    //   pos++;
                        while(pos < n && s[pos] =='w' )
                              pos++ ;
                       if (pos < n) { // check if there are any additional characters after 'w'
                           valid = false;
                       }
                   }
               }
           }
        }
        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
