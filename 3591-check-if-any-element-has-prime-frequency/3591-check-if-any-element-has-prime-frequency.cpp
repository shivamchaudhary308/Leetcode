class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums) freq[x]++;
        for (auto& p:freq){
            if (isprime(p.second)) return true;
        }
        return false;
    }
private:
    bool isprime(int n){
        if(n<2)return false;
        for (int i=2;i*i<=n;i++){
            if (n%i==0) return false;

        }
        return true;
    }
};