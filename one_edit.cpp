class Solution {
    
    bool oneEdit(string &s, string &t) {        
        if (t.length()-s.length()>1) return false;                        
        bool edited = false;
        int j = 0;        
        for (int i=0; i<s.length(); i++) {
            if (s[i]!=t[j]) {
                if (edited) return false;
                if (t.length()>s.length()) {    
                    i--;
                }
                edited = true;
            }
            j++;
        }
        return edited || s.length()<t.length();   
    }
public:
    bool isOneEditDistance(string& s, string& t) {
        if (s.length()<t.length()) {
            return oneEdit(s, t);
        }
        else {
            return oneEdit(t, s);
        }
    }
};

int main() {
	// auto a = "aaaac";
	// auto b = "aaaa";
	
}