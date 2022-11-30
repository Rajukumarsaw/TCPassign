class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num=0;
        int N=n;
        while(n>0){
            int a=n%10;
            num=num+(a*a*a);
            n=n/10;
        }
        if(num==N){
            return "Yes";
            
        }
        else 
        return "No";
    }
};