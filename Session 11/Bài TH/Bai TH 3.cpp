#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri number[%d]: ",i);
		scanf("%d",&number[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(number[j]<number[i]){
				int temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	printf("Sap xep mang theo thu tu tang dan:\n");
	for(int i=0;i<n;i++){
		printf("number[%d]=%d\n",i,number[i]);
	}
}
