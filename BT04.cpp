#include <stdio.h>

int check(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    int size = 5;
    int array[] = {1, 2, 3, 4, 5};
    if (check(array, size)) {
        printf("Day la day so doi xung");
    } else {
        printf("Day khong phai day so doi xung");
    }
    int number[] = {1,2,3,2,1};
    if(check(number,size)){
    	printf("day la mang doi xung\n");
	}else{
		printf("day khong phai la mang doi xung\n");
	}
}
