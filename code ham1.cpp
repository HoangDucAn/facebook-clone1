n#include<stdio.h>
#include<math.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	printf("%d",max(200,400));
	return 0;
}
