class Solution {
public:
    int hammingWeight(int n) {
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
        int count=0;
        for(int i=0;i<binary.size();i++){
            if (binary[i]=='1'){
                count+=1;
            }
        }
        return count;
    }
};