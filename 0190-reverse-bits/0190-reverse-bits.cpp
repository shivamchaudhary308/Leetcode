class Solution {
public:
    int reverseBits(int n) {
        // 32 bit signed integer 
        string binary="";
        while(n>0){
            if (n%2==0){
                binary+='0';
            }
            else{
                binary+='1';
            }
            n/=2;
        }
        while(binary.size()<32){
            binary+='0';
        }
        // there is no need to reverse asa it is already reversed as it is done in the opposite order only
        
        // reverse(binary.begin(),binary.end());

        int num=0;
        for (int i=0;i<binary.size();i++){
            num=num*2+(binary[i]-'0');
        }
        return num;
    }
};

