#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int j,i,sum=0;
	float a[10],b[10];
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	//voroodi
	for(i=0;i<10;i++){
		sum+=a[i];
	}
	sum=sum/10;
	for(j=0;j<10;j++){
		b[j]=abs(a[j]-sum);
	}
	int k = b[0];
	int q;
	for(j=1;j<10;j++){
		if(k>b[j]){
			k=b[j];
			q=j;
		}
	}
	cout<<a[q];
	return 0;
}
