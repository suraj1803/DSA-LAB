#include <stdio.h>

int main() {
    int a[20], size, i, num, pos;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("enter elements of array: "); 
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element you want to insert ");
    scanf("%d", &num);
    printf("enter position where you want to insert ");
    scanf("%d", &pos);
    if(pos < 0 || pos > size + 1) {
        printf("invalid position");
    }
    else {
        for (i = size - 1; i >= pos - 1; i--) {
            a[i+ 1] = a[i];
        }
    }
    a[pos - 1] = num;
    size = size + 1;
    printf("new list of elements after insertion\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0; 
}