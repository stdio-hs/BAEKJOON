/*
파일명 : BAEKJOON_10926
프로그램의 목적 및 기본기능 : < 입력값(문자열) + ??! > 출력
프로그램 작성자 : 이현성
프로그램 작성일지 : 2022/06/30
*/

#pragma warning(disable: 4996) // scanf오류 안뜨게 하는 pragma정의 

#include <stdio.h>

int main()
{
	char str[51];
	scanf("%s", str);

	printf("%s??!", str);
	return 0;
}