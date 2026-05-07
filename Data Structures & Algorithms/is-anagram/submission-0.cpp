class Solution {
public:
    bool isAnagram(string s, string t) {
      int n=s.size();
      int m=t.size();

      if(m!=n){
        return false;
      }

      unordered_map<char,int>mps;
      unordered_map<char,int>mpt;
      for(int i=0;i<n;i++){
            mpt[t[i]]++;
            mps[s[i]]++;
        }
         if(mps!=mpt){return false;}
       else{return true;}
    }
};
