class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0){
            return;
        }
        char ch=s[s.size()-1];
        cout<<ch<<" ";
        s.pop_back();
        reverseString(s);
        s.insert(s.begin(),ch);
        return;
    }
};