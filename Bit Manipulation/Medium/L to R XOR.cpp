https://www.codingninjas.com/studio/problems/l-to-r-xor_8160412?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


int findXOR(int L, int R){
    int left = 0, right = 0;
    L-= 1;
    if(L%4 == 0) left = L;
    else if(L%4 == 1) left = 1;
    else if(L%4 == 2) left = L+1;
    else if(L%4 == 3) left = 0;

    if(R%4 == 0) right = R;
    else if(R%4 == 1) right = 1;
    else if(R%4 == 2) right = R+1;
    else if(R%4 == 3) right = 0;
    return right ^ left;
}
