#include<math.h>

int gcd(int a,int b)
{
	//Write your code here
	int gcdiv;
	for(int i=1;i<=min(a,b);i++){
		if(a%i==0 && b%i==0){
			gcdiv=i;
		}
	}
	return gcdiv;
}
