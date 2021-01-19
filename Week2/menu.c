# include <stdio.h>
# include <cs50.h>

int main (void)
{    
    string day = get_string("write day : \n");
      
    if (day == '월요일')
    {
        printf("%s : 청국장",day);
    }
    else if (day == '화요일')
    {
        printf("%s : 비빔밥",day);
    }
    
    else if (day == '수요일')
    {
        printf("%s : 된장찌개",day);
    }
    
    else if (day == '목요일')
    {
        printf("%s : 칼국수",day);
    }
    
    else if (day == '금요일')
    {
        printf("%s : 냉면",day);
    }
    
    else if (day == '토요일')
    {
        printf("%s : 소불고기",day);
    }
    
    else if (day == '일요일')
    {
        printf("%s : 오삼불고기",day);
    } 
}

