https://www.codingninjas.com/studio/problems/floor-from-bst_625868?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


int Floor(BinaryTreeNode<int> *node, int input)
{
		/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
	int flr;
	while(node)
	{
		if(node->data == input) return node->data;
		if(node->data > input) node = node->left;
		else
		{
			flr = node->data;
			node = node->right;
		}
	}
	return flr;
}
