class Solution {
public:
    bool isPalindrome(string s) {
        string pali = "";

        //filtering the string of "s"
        for (int i = 0; i < s.length(); i++) {
            if(isalpha(s[i])) {
                if (isupper(s[i])) {
                    pali += tolower(s[i]);
                } else {
                    pali += s[i];
                }
                
            } else if (isdigit(s[i])) {
                pali += s[i];
            }
        }


        cout << "pali: " << pali << endl; // REMOVE


        //reading forward and backward
        for (int i = 0; i < pali.length(); i++) {
            for (int j = (pali.length()-1)-i; j > 0; j--) {

                cout << "pali[i]: " << pali[i] << endl; // REMOVE
                cout << "pali[j]: " << pali[j] << endl; // REMOVE

                if (pali[i] != pali[j]) {
                    return false;
                }

                break;

            }


        }


        return true;
    }
};