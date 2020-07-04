#include<stdio.h>

//You are given an integer n representing n full beer bottles. 
//Given that you can exchange 3 empty beer bottles for 1 full beer bottle, return the number of beer bottles you can drink.

int main(){
	
	int n;
	printf("Enter an integer n representing n full beer bottles:");
	scanf("%d",&n);
	int a=n;
	int count=0;
	while(n>0){
		count+=n/3;
		n=n/3;
		
	}
	n=a;
	printf("The number of beer bottles you can drink:%d",count+n);
	
	return 0;
}
