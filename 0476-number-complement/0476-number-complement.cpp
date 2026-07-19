class Solution {
public:
    int findComplement(int num) {
        string binary="";
        while(num>0){
            // writing the binary of the complements 
            if (num%2==0){
                binary+='1';
            }
            else{
                binary+='0';
            }
            num/=2;
        }
        //for reversing down to the correct order 
        reverse(binary.begin(), binary.end());
        int number=0;
        for (int i=0;i<binary.size();i++){
            number=number*2+(binary[i]-'0');
        }
        return number;

    }
};