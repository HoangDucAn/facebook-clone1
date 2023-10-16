#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
	printf("nhap cac phan tu trong mang\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int sum(int a[],int n){
		int tong=0;
		for(int i=0;i<n;i++) tong+=a[i];
		return tong;
	}  

int main(){
	int n, a[100];
	scanf("%d",&n);
	nhap(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	sum(a,n);
	printf("tong cac so la: %d",sum(a,n));
}
