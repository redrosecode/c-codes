#include<stdio.h>
#define r 0.82
main(){
	float p,v,n,t;
	printf("hacim giriniz:");
	scanf("%f",&v);
	printf("mol sayisini giriniz:");
	scanf("%f",&n);
	printf("ortamin sicakligini giriniz:");
	scanf("%f",&t);
	p=n*r*t/v;
	printf("basinc:%f",p);
	getch();
}
