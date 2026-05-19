class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int res=0;
        for(int i=0;i<32;i++)
        {
            //left shift res
            res<<=1;
            res|=(n&1);
            n>>=1;
        }
        return res;
    }
};
