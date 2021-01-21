#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{    
    string day = get_string("write day : ");
      
    if (strcmp(day,"월요일") == 0)
    {
        printf("%s : 청국장", day);
    }
    else if (strcmp(day,"화요일") == 0)
    {
        printf("%s : 비빔밥", day);
    }
    
    else if (strcmp(day,"수요일") == 0)
    {
        printf("%s : 된장찌개", day);
    }
    
    else if (strcmp(day,"목요일") == 0)
    {
        printf("%s : 칼국수", day);
    }
    
    else if (strcmp(day,"금요일") == 0)
    {
        printf("%s : 냉면", day);
    }
    
    else if (strcmp(day,"토요일") == 0)
    {
        printf("%s : 소불고기", day);
    }
    
    else if (strcmp(day,"일요일") == 0)
    {
        printf("%s : 오삼불고기", day);
    }

    else
    {
        printf("잘못 입력하셨습니다. 요일을 입력해주세요.\n")
    }
}