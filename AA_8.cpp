#include<stdio.h>

int main(){
	int a[100],n,c,d,swap;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(c=0;c<n;c++){
	   scanf("%d",&a[c]);	
	}
	
	for(c=0;c<n-1;c++){
		for(d=0;d<n-c-1;d++){
			if(a[d] > a[d+1]){
				swap = a[d];
				a[d] = a[d+1];
				a[d+1] = swap;
			}
		}
	}
	
	printf("The sorted array is: \n");
	for(c=0;c<n;c++){
		printf("%d ",a[c]);
	}
	return 0;
}
