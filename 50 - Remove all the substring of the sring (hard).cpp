class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partLen = part.length();
        string result = "";  
        
        for (int i = 0; i < s.length(); i++) {
            result.push_back(s[i]);  
            
            
            if (result.length() >= partLen) {
                bool found = true;
                for (int j = 0; j < partLen; j++) {
                    if (result[result.length() - partLen + j] != part[j]) {
                        found = false;
                        break;
                    }
                }
                
            
                if (found) {
                    for (int j = 0; j < partLen; j++) {
                        result.pop_back();
                    }
                }
            }
        }
        return result;
    }
};



// approach----2



// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()!=0 && s.find(part)<s.length()){
//             s.erase(s.find(part),part.length());
//         }
//         return s;
//     }
// };
