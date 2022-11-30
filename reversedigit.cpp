class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int rev_no=0;
		    while(n>0){
		        long long int lastdigit=n%10;
		        rev_no=(rev_no+lastdigit)*10;
		        n=n/10;
		    }
		    rev_no=rev_no/10;
		    return rev_no;
		}
};