/*
파일명: BAEKJOON_1008
프로그램의 목적 및 기본기능 : 첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.
프로그램 작성자 : 이현성
프로그램 작성일지 : 2022 / 07 / 05
*/

#include <stdio.h>

int main()
{

    double a, b;

    scanf_s("%lf%lf", &a, &b);
    printf("%.101lf", a / b);
}