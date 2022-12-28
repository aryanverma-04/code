#include<stdio.h>
int main(){
    int a = 10;
    printf("%d",&a);
    printf("\n");
    int *j;
    printf("%d",&j);
    printf("\n");
    int *k;
    printf("%d",&k);
    int *pointer = &a;
    printf("\n");
    printf("%d",&pointer);
    printf("\n");
    printf("%d",*pointer);
    printf("\n");
    int *nullp = NULL;
    printf("%d",nullp);
    printf("\n");
    printf("%d",&nullp);

}