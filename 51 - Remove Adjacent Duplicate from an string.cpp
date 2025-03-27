class Solution {
public:
    string removeDuplicates(string s) {
        int f = 0;
        int length = s.length();
        while (f < length - 1) {  
            if (s[f] == s[f + 1]) {
                s.erase(f, 2);
                length -= 2;  
                if (f > 0) f--;  
            } else {
                f++;
            }
        }
        return s;
    }
};

// appraoch------------2



// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string temp;
//         for(int i=0 ; i<s.length() ; i++){
//             if(!temp.empty() && s[i]==temp.back()){
//                 temp.pop_back();
//             }else{
//                 temp.push_back(s[i]);
//             }
//         }
//       return temp;
//     }
// };