class Solution {
public:
    vector<int> evenOddBit(int n) {
        string binary="";
        while(n>0){
            if (n%2 == 0){
                binary+="0";
            }
            else{
                binary+="1";
            }
            n/=2;
        }
        int odd_count=0 , even_count=0;
        for (int i=0;i<binary.size();i++){
            // compare the string so take 1 as the string 
            if (binary[i]=='1'){
                if(i%2==0){
                    even_count+=1;
                }
                else{
                    odd_count+=1;
                }
            }
        }
        return {even_count,odd_count};
    }
};