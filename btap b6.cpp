#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	int x;
	int b[n]={0};
	int dem=0;
	scanf("%d",&x);
	int dung=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			dung=1;
			b[dem++]=i;
		}
	}
	if(dung){
		printf("1\n");
		for(int i=0;i<dem;i++){
			printf("%d ",b[i]);
		}
	}
	else{
		printf("0");
	}
}
