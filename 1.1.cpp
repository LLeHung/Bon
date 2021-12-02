#include <stdio.h>
int main(){
	
	// input A,B,C
	int A,B;
	printf("Nhap A=");
	scanf("%d",&A);
	printf("Nhap B=");
	scanf("%d",&B);
	printf("Nhap C=");
	scanf("%d",&C);
	// so sanh A > B
	if(A>B){
		// Yes
		printf("So lon hon: %d",A);
	}else{
		// No
		printf("So lon hon: %d",B);
	}
}
