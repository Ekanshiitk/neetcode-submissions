class Solution {
public:

    string encode(vector<string>& strs) {
        string enc; 
        for(string s:strs)
        {
            enc.append(s);
            enc.push_back('\x1f');
        }
        
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        string temp = "";
        for(char c:s){
            if(c == '\x1f'){
                dec.push_back(temp);
                temp = "";
            }
            else{
                temp.push_back(c);
            }
        }
        return dec;
    }
};
