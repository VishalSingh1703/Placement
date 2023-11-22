https://www.codingninjas.com/studio/problems/swap-two-numbers_1380853?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=DISCUSS


void swapNumber(int &a, int &b) {
	a ^= b;
	b ^= a;
	a ^= b;
}
