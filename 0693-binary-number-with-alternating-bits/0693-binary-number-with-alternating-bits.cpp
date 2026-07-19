class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary="";
        while(n>0){
            if(n%2==0){
                binary+="0";
            }
            else{
                binary+="1";
            }
            n/=2;

        }
        for (int i=0;i<binary.size()-1;i++){
            if (binary[i] == binary[i+1]){
                return false;
            }
        }
        return true;
    }
};