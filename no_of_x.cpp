class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
    int cnt=0;
    while(L<R-1){
        
        int t=L+1;
        while(t!=0){
            if(t%10==X){
                cnt++;
            }
            t=t/10;
        }
        L++;
    }
    return cnt;
    }
};