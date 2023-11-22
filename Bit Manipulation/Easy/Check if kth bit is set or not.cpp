https://www.codingninjas.com/studio/problems/check-whether-k-th-bit-is-set-or-not_5026446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


bool isKthBitSet(int n, int k)
{
    return (n & 1<<(k-1)) == 1<<k-1 ? true : false;
    // return (n>>(k-1)&1);
}
