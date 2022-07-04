/*
파일명 : BAEKJOON_18018
프로그램의 목적 및 기본기능 : 불기 연도를 서기 연도로 변환한 결과를 출력한다.
프로그램 작성자 : 이현성
프로그램 작성일지 : 2022/07/01
*/

#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);

    a = a - 543;

    printf("%d", a);
}