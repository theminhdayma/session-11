#include<stdio.h>
int main(){
	int number[]={1,2,3,4,5};
	int searchValue=4;
	int end=sizeof(number)/sizeof(int);
	int start=0;
	int mid;
  	while(start<=end) {
    	mid = (start+end)/2;
    	if (number [mid] == searchValue){
      		break;
    	} else if (number [mid]<searchValue) {
      start = mid+1;
   		} else {
      end = mid-1;
    	}
  	}
	  	if (number [mid] == searchValue) {
	    printf("Phan tu co chi so %d trong mang co gia tri %d\n",mid,number[mid]);
	  	} else {
	    printf("Khong tim thay phan tu co gia tri %d trong mang\n",searchValue);
	  	}
	}
	
