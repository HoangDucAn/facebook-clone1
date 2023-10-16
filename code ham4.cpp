#include<stdio.h>
#include<math.h>
void chinhphuong(int n){
	int can=sqrt(n);
	if(can*can==n) printf("Yes");
	else printf("No");
}
int main(){
	int n;
	scanf("%d",&n);
	chinhphuong(n);
	return 0;
}
