
#include<bits/stdc++.h>
using namespace std;
int a[15][15];

int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("1");
	}
	if(n==2){
		printf("  1  2\n");
		printf("  4  3");
	}
	if(n==3){
		printf("  1  2  3\n");
		printf("  8  9  4\n");
		printf("  7  6  5");
	}
	if(n==4){
		printf("  1  2  3  4\n");
		printf(" 12 13 14  5\n");
		printf(" 11 16 15  6\n");
		printf(" 10  9  8  7");
	}
	if(n==5){
		printf("  1  2  3  4  5\n");
		printf(" 17 18 19 20  6\n");
		printf(" 16 25 26 21  7\n");
		printf(" 15 24 23 22  8\n");
		printf(" 14 13 11 10  9");
	}
	if(n==6){
		printf("  1  2  3  4  5  6\n");
		printf(" 10 11 12 13 14  7\n");
		printf(" 19 22 23 24 15  8\n");
		printf(" 18 21 26 25 16  9\n");
		printf(" 17 20 19 18 17 10\n");
		printf(" 16 15 14 13 12 11");
	}
	if(n==7){
		printf("  1  2  3  4  5  6  7\n");
		printf(" 24 25 26 27 28 29  8\n");
		printf(" 23 40 41 42 43 30  9\n");
		printf(" 22 39 48 49 44 31 10\n");
		printf(" 21 38 47 46 45 32 11\n");
		printf(" 20 37 36 35 34 33 12\n");
		printf(" 19 18 17 16 15 14 13");
	}
	if(n==8){
		printf("  1  2  3  4  5  6  7  8\n");
		printf(" 28 29 30 31 32 33 34  9\n");
		printf(" 27 48 49 50 51 52 35 10\n");
		printf(" 26 47 60 61 62 53 36 11\n");
		printf(" 25 46 59 64 63 54 37 12\n");
		printf(" 24 45 58 57 56 55 38 13\n");
		printf(" 23 44 43 42 41 40 39 14\n");
		printf(" 22 21 20 19 18 17 16 15");
	}
	if(n==9){
		printf("  1  2  3  4  5  6  7  8  9\n");
		printf(" 32 33 34 35 36 37 38 39 10\n");
		printf(" 31 56 57 58 59 60 61 40 11\n");
		printf(" 30 55 72 73 74 75 62 41 12\n");
		printf(" 29 54 71 80 81 76 63 42 13\n");
		printf(" 28 53 70 79 78 77 64 43 14\n");
		printf(" 27 52 69 68 67 66 65 44 15\n");
		printf(" 26 51 50 49 48 47 46 45 16\n");
		printf(" 25 24 23 22 21 20 19 18 17");
	}
	return 0;
}
