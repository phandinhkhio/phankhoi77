/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
	int sqrtNum = sqrt(num);
	return (sqrtNum * sqrtNum == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void printPerfectSquares(int n) {
	int count = 0;
	printf("Các số chính phương nhỏ hơn %d là: ", n);
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\nTổng số chính phương: %d\n", count);
}

int main() {
	int n;
	printf("Nhập n: ");
	scanf("%d", &n);
	printPerfectSquares(n);
	getchar();
	return 0;
}

