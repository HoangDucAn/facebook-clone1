#include<stdio.h>
#include<math.h>
int ktra(int n){
	if(n%2==0){
		return 1;
	}
	return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(ktra(a[i])==1){
			printf("%d",a[i]);
		}
	}
	return 0;
}

