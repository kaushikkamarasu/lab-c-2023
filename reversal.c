#include <stdio.h>
int reverse(int x){
    int temp=x, rev=0, rem;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return rev;
}
int main() {
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
	   int rev= reverse(arr[i]);
	   printf("the reverse of %d is %d \n",arr[i],rev);
	}
	return 20;
}
