class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st ;
        for(int j =0 ; j <emails.size() ;++j){
            string ema ="";

            string em =emails[j];
            for (int i = 0; i <em.size() ; i++) {
                if(em[i] == '.') continue;
                else if(em[i] == '+'|| em[i]=='@') break;

                ema += em[i] ;
            }
            ema += em.substr(em.find('@'),em.size()-1);
            st.insert(ema) ;
        }
        return st.size();
    }
};
