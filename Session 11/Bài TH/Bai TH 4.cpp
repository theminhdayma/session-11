#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int number[n];
	for(i=0;i<n;i++){
		printf("Nhap gia tri number[%d]: ",i);
		scanf("%d",&number[i]);
	}
	int findNumber;
	printf("Nhap vao so can tim: ");
	scanf("%d",&findNumber);
	for( i=0;i<n;i++){
		if(findNumber==number[i]){
			break;
		}
	}
	printf("gia tri can tim o vi tri %d cua mang",i);
}
