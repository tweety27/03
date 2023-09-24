#include <stdio.h>

int main(void){
    int i1, i2;
    float num;

    printf("분자를 입력하세요 : ");
    scanf("%d", &i1);


    printf("분모를 입력하세요 : ");
    scanf("%d", &i2);

    num = (double)i1 / i2;
    printf("나누기의 결과는 %f 입니다 : ", num);
    return 0;
}