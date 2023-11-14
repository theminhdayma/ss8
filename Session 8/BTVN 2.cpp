#include<stdio.h>
main(){
	int row,col;
	printf("Nhap so dong va so cot:");
	scanf("%d%d",&row,&col);
	int number[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("number[%d][%d]= ",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	printf("Cac so chan trong mang la: ");
	int sum;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(number[i][j]%2==0){
				printf("\t%d",number[i][j]);
				sum+=number[i][j];
			}
		}
	}
	printf("\n");
	printf("Tong ca so chan la: %d",sum);
}
