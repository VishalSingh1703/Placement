https://www.codingninjas.com/studio/problems/convert-min-heap-to-max-heap_1381084?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


vector<int> MinToMaxHeap(int n, vector<int>&arr)
{
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	return arr;
}
