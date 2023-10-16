  #include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap gia tri mang: ");
	scanf("%d",&n);
	int a[n];	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
