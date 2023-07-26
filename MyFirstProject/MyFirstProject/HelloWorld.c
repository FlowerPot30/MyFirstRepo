#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp1;

	if ((fp1 = fopen("C:\\Project\\phone", "r")) == NULL) {
		printf("Cannot open file phone");
		exit(1);
	}
}
