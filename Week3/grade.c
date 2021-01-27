#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

const int NUMBER_OF_GRADES = 9; // 학점의 개수 = 배열의 인자수
const int SCORES[NUMBER_OF_GRADES] = {95, 90, 85, 80, 75, 70, 65, 60, 0}; // 점수 리스트
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"}; // 학점 리스트

char* calculateGrade(int score, const int scores[], const char *grades[], int length); // 학점 계산 함수 프로토타입

int main(void)
{
    printf("학점 프로그램\n");
    printf("종료를 원하면 \"999\" 를 입력\n");

    printf("[학점 테이블]\n");
    printf("점수 : ");
    for (int i = 0; i < NUMBER_OF_GRADES; i++)
    {
        printf("%d\t", SCORES[i]);
    }
    printf("\n");

    printf("학점 : ");
    for (int i = 0; i < NUMBER_OF_GRADES; i++)
    {
        printf("%s\t", GRADES[i]);
    }
    printf("\n");

    // 성적 입력
    do
    {
        int score = get_int("성적을 입력하세요 (0 ~ 100) : ");
        // scanf 함수를 사용하여 입력받을 경우
        // int score;
        // scanf("성적을 입력하세요 (0 ~ 100) : %d", &score);
        if(score >= 0 && score <= 100) // 입력한 값이 점수 범위에 들어갈 경우
        {
            char *grade = calculateGrade(score, SCORES, GRADES, NUMBER_OF_GRADES); // 학점 계산 함수를 호출한 후 학점을 입력받는다.
            printf("학점은 %s입니다.\n", grade);
            continue; // 반복문 처음으로 돌아간다.
        }
        else if(score == 999) // 999를 입력한 경우
        {
            printf("학점 프로그램을 종료합니다.\n");
            break;// 반복문 종료
        }
        else // 입력한 값이 범위를 벗어난 경우
        {
            printf("** %i 성적을 올바르게 입력하세요. 범위는 0 ~ 100 입니다.\n", score);
            continue; // 반복문 처음으로 돌아간다.
        }
    }
    while(true);
}

// 학점 계산 함수 정의
char* calculateGrade(int score, const int scores[], const char *grades[], int length)
{
    char *grade = NULL; // grade 변수 선언후 NULL로 초기화(초기화하지 않으면 에러 발생)
    for (int i = 0; i < length; i++) // 점수 배열을 반복하며 입력한 점수와 비교
    {
        if (score >= scores[i]) // 입력한 점수가 점수 리스트의 i번째 값보다 크거나 같을 경우
        {
            grade = malloc(sizeof(char) * strlen(grades[i])); // grade 변수에 학점 글자수만큼 메모리 할당
            strcpy(grade, grades[i]); // 학점 리스트의 i번째 값을 grade 변수에 복사
            break; // 반복문 종료
        }
        else
        {
            continue; // 반복문의 처음으로 (생략 가능)
        }
    }
    return grade; // grade 변수 값 반환
}
