class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int size=s.size();
        int size_2=t.size();
        if(size>size_2){
            for(int i=0;i<size;i++){
                if(s[i]==t[i]){
                    continue;
                }
                else{
                    return s[i];
                }
            }
            return s[size-1];
        }
        else{
            for(int i=0;i<size_2;i++){
                if(s[i]==t[i]){
                    continue;
                }
                else{
                    return t[i];
                }
            }
            return t[size_2-1];
        }
    }
};