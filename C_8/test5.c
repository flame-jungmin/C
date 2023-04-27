//평균 계산하기 프로그램
#include <stdio.h>

int main(void){
    double num1,num2,num3;
    double sum,avg;
    printf("3개의 실수룰 입력하시오: ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    sum=num1+num2+num3;
    avg=sum/3;
    printf("합계=%.2lf\n",sum);
    printf("평균=%.2lf",avg);
    return 0;
}