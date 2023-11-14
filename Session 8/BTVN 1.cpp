#include <stdio.h>
main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int numbers[n];
	printf("Nhap vao gia tri cua mang: \n");
	for(int i=0;i<n;i++){
		printf("numbers[%d]= ",i);
		scanf("%d",&numbers[i]);
	}
	int max=numbers[0];
	int min=numbers[0];
	for(int i=1;i<n;i++){
		if(max<numbers[i]){
			max=numbers[i];
		}
		if(min>numbers[i]){
			min=numbers[i];
		}
	}
	printf("Gia tri lon nhat trong mang la: %d\n",max);
	printf("Gia tri nho nhat trong mang la: %d\n",min);
}
