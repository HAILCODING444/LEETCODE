// o n time 
// o n space 
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size() ; 
        // edge case 
        if(n < 26) return 0 ; 
        
        unordered_map<char , int> mp ;
        for(char c : sentence) mp[c]++ ;
        return mp.size() == 26 ; 
    }
};

/* brute force 
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.length() ;
        bool flag ; 
        for(char ch = 'a' ; ch <= 'z' ; ch++){
            flag = check(sentence , ch) ;
            if(flag == false) return false ; 
        }
        return true ; 
    }
    bool check(string sentence , char ch){
        int n = sentence.length() ; 
        for(int i=0 ; i<n ; i++){
            if(ch == sentence.at(i)){
                return true ; 
            }
        }
        return false ; 
    }
};

*/ 