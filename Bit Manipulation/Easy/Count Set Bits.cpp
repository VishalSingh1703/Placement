https://www.codingninjas.com/studio/problems/count-total-set-bits_784?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=DISCUSS


int countSetBits(int N)
{
    int count = 0;
    int num = 0;
    for(int i = 1; i<=N; i++)
    {
        num = i;
        while(num>0)
        {
            count += num & 1;
            num >>= 1;
        }
    }
    return count;
}
