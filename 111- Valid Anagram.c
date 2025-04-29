class Solution {
public:
    bool checkIfPangram(string sentence) {
        
      set<int> s;

      for(int i=0 ; i<sentence.length() ; i++){
        s.insert(sentence[i]);
      }

      if(s.size()==26) return true;
      else return false;
    }
};