#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int *A,*B;
    *A=*a;
    *B=*b;
    //*a=0;
    //*b=0;
    *a=*A+*B;   
    if (*A>*B) {
        *b=*A-*B;
    }
    else{
        *b=*B-*A;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
