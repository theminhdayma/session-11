#include<stdio.h>
#include<stdlib.h>
main(){
	int n,j;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	int numbers[n];
	printf("Nhap cac gia tri cho phan tu: \n");
	for(int i=0;i<n;i++){
		printf("numbers[%d]= ",i);
		scanf("%d",&numbers[i]);
	}
	int key;
	int temp;
	do{
		printf("**********MENU***********\n");
		printf("1.In gia tri cac phan tu trong mang\n");
		printf("2.Su dung insertion sort sap xep mang giam dan va in ra\n");
		printf("3.Su dung Selection Sort sap xep tang dan roi in ra\n");
		printf("4.Su dung Bubble Sort sap xep giam dan roi in ra\n");
		printf("5.Thoat\n");
		int choice;
		printf("Moi ban chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Cac gia tri co trong mang la: ");
				for(int i=0;i<n;i++){
					printf("\t%d",numbers[i]);
				}
				printf("\n");
				break;
			case 2:
				//Insertion Sort:
				for(int i=0;i<n;i++){
				int key=numbers[i],j=i-1;
				while(j>=0&&numbers[j]<key){
					numbers[i]=numbers[j];
					j=j-1;
				}
				numbers[j+1]=key;
			}
			for(int i=0;i<n;i++){
				printf("numbers[%d]=%d\n",i,numbers[i]);
			}
				break;
			case 3:
				//Selection Sort
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(numbers[j]<numbers[i]){
							temp=numbers[i];
							numbers[j]=numbers[i];
							numbers[j]=temp;
						}
					}
				}
				printf("Mang sau khi sap xep tang dan la: \n");
				for(int i=0;i<n;i++){
					printf("\t%d",numbers[i]);
				}
				printf("\n");
				break;
			case 4:
				for(int i=0;i<n;i++){
				for(int j=0;j<n-i-1;j++){
					if(numbers[i]<numbers[j]){
						int temp=numbers[i];
						numbers[i]=numbers[j];
						numbers[j]=temp;
					}
				}
			}
			for(int i=0;i<n;i++){
				printf("numbers[%d]=%d\n",i,numbers[i]);
			}
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Khong hop le. Vui long chon tu 1-5");
		}
	}while(1==1);	
}
