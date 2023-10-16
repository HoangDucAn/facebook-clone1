#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int tong=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong=n){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
