https://www.codingninjas.com/studio/problems/bit-manipulation_8142533?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION


vector<int> bitManipulation(int num, int i){
    i--;
    vector<int> ans;
    (num&(1<<i)) == (1<<i) ? ans.push_back(1) : ans.push_back(0);
    ans.push_back(num|(1<<i));
    ans.push_back(num&~(1<<i));
    return ans;
}
