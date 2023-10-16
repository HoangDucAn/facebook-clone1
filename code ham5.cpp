 #include<stdio.h>
#include<math.h>
int gdv(int *var){
	*var=*var-1;
	return *var;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("Truoc:x=%d",x);
	gdv(&x);
	printf("Sau:x=%d",x);
	return 0;
}
