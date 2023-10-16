#include<stdio.h>
#include<math.h>
double S(int n){
	double tong=0;
	for(int i=1;i<=n;i++) tong+= (double)1/i;
	return tong;
}
int main(){
	int n;
	scanf("%d",&n);
	double tong=S(n);
	printf("%.2lf",tong);
	return 0;
}
