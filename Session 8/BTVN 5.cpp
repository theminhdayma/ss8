#include<stdio.h>
int main() {
	int n,i,update_value,update_index;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	printf("nhap so can thay va vi tri thay");
	 scanf("%d%d",&update_value, &update_index);
	a[update_index-1] = update_value;
	for (i=0;i<n;i++) printf("%d ", a[i]);
}
