#include<math.h>

bool checkArmstrong(int n){
	//Write your code here
	int actualnum=n;
	int temp=n;
	int count=0;
	while(temp>0){
		temp=temp/10;
		count++;
	}
	int sumofpow=0;
	while(actualnum>0){
		int digit=actualnum%10;
		sumofpow += pow(digit,count);
		actualnum=actualnum/10;
	}

	if(sumofpow==n){
		return true;
	}
	else{
		return false;
	}

}
