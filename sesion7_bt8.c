#include <stdio.h>
int main(){
	int row, col;
	printf("hay nhap so hang cua ma tran : ");
	scanf("%d", &row);
	printf("hay nhap so cot cua ma tran : ");
	scanf("%d", &col);
	int maTran[row][col];
	
	for ( int i = 0 ; i < row ; i++){
		for ( int j = 0 ; j < col ; j++){
			printf(" Nhap phan tu thu %d cua hang %d: ",j+1, i+1);
			scanf("%d", &maTran[i][j]);
    } 
    printf("\n");
        }
        printf("cac phan tu trong mang la : \n");
        for ( int i = 0 ; i < row ; i++){
		    for ( int j = 0 ; j < col ; j++){
			printf(" \t%d ",maTran[i][j]);
	}
	printf("\n");
		
 }
	return 0;
}
