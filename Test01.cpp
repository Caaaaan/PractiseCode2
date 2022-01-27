#include<stdio.h>
int main(){
	long long i,n,a,b;
	long long sum=0;
	scanf("%lld %lld",&a,&n);
	int part=a;
	for(i=1;i<=n;i++){
		sum=sum+part;
		part=part*10+a;
	} 
	printf("%lld",sum);
}