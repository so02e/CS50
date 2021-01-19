# 2. C언어

## 1. C기초

오래된 텍스트 기반의 언어이다.

### (1) int main(void) 

> '시작한다' 의 의미를 가진다.



### (2) printf

> f는 형식화된 텍스트를 의미하고, 형식화된 텍스트를 출력한다.

```c
int main(void)
{
	printf("hello, world\n");
}
```



### (3) 컴파일러

> 우리가 작성한 **"소스코드"**를 2진수로 변환된 **"머신코드"**로 변환시켜주어야 컴퓨터가 이해할 수 있다.
>
> 이러한 역할을 하는 것이 **컴파일러**이다.

![](C:\Users\user\Pictures\mceclip4.png)



터미널 창에

`clang` : 코드를 컴파일하는 프로그램 이름

명령행 인자를 추가할 수도 있다.(`-o`: 출력) 

```c
clang hello.c
```

이 결과로 a.out (머신코드)이 생김



`./a.out`

```c
./a.out
```

. 은 현재 폴더를 의미하고, 현재 폴더의 a.out를 출력하는 것을 의미한다.



`ls`

현재 디렉토리에 있는 파일을 보여줌



`rm`

rm.a.out : a.out을 제거하는 명령어









## 2. 문자열

### (1) get_string(구/문장)

```c
# include <stdio.h>
# include <cs50.h>

int main(void){
    string answer = get_string("What's your name?c\n");
}

```

변수 answer(문자열=str) 에 사용자의 입력값을 저장한다.



### (2) 형식지정자

```c
# include <stdio.h>
# include <cs50.h>

int main(void){
    string answer = get_string("What's your name?c\n");
    printf("hello, %s", answer);
}

```

형식 지정자를 사용하여 쉼표와 변수명(answer)을 같이 입력해줌으로 컴퓨터에게 가져와야 할 값을 알려준다.





```c
$ clang -o name string.c -lcs50
```

소스코드에 추가하도록 하고, 명령어로 연결될 수 있도록 함. 

이 과정은 복잡하고

```c
make 프로그램 이름(확장자 C를 제외한)
```



## 3. 조건문과 루프

### (1) 변수 설정과 1 증가
```c
int counter = 0; #변수를 만들어 0을 저장
counter = counter + 1;
counter += 1;
counter ++;
```



### (2) 조건

```c
if (x < y)
{
	printf("x is less than y\n");
}
else if (x > y)
{
    printf("x is not less than y\n");
} 
else
{
    printf("x is equal to y\n");
}
```



### (3) 루프
#### ① 무한루프
```c
while (true)
{
	printf("hello world\n");
}
```

#### ② 조건에 대한 반복
```
int i = 0;
while (i<50)
{
	printf("hello,world\n");
	i += 1;
}
```



```c
for (int i = 0; i < 50; i=i+1)
{
	printf("hello,world\n");
}
```



## 4. 자료형, 형식 지정자, 연산자

### (1) 데이터 타입

- bool: 불리언 표현, (예) True, False, 1, 0, yes, no
- char: 문자 하나 (예) 'a', 'Z', '?'
- string: 문자열
- int: 특정 크기 또는 특정 비트까지의 정수 (예) 5, 28, -3, 0
- long: 더 큰 크기의 정수
- float: 부동소수점을 갖는 실수 (예) 3.14, 0.0, -28.56
- double: 부동소수점을 포함한 더 큰 실수



### (2) get

> 위와 같은 데이터 타입을 입력받을 수 있는 함수이다.

- get_char
- get_double
- get_float
- get_int
- get_long
- get_string



### (3) 형식지정자

- **%c** : char
- **%f** : float, double
- **%i** : int
- **%li** : long
- **%s** : string



### (4) 연산자 및 주석

- +: 더하기
- -: 빼기
- *: 곱하기
- /: 나누기
- %: 나머지
- &&: 그리고
- ||: 또는
- //: 주석



### (5) 정수

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("What's your age?\n");
    int days = age * 365;
    printf("You are at least %i days old.\n", days);
}
```





### (6) 실수

```c
#include <cs50.h>
#include <stdio.h>

int main(void){
    float price = get_float("What's the price?\n");
    printf("Your total is %f\n", price * 1.0625);
}
```



## 5. 사용자 정의 함수, 중첩 루프

### (1) 사용자 정의 함수

```c
#include <stdio.h>

void cough(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void)
{
    printf("cough\n");
}
```



### (2) 중첩 루프

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```



## 6. 하드웨어의 한계

### (1) 메모리, RAM

`RAM` : 파일이 열려있는 동안 저장되는 공간

메모리의 용량은 유한하여, 컴퓨터가 할 수 있는 일은 한계가 있다.

즉, 연산에도 한계가 존재한다.



### (2) 오버플로우

정수를 계속 키우는 프로그램에서 어느 수준 이상의 숫자는 저장할 수 없는 `오버플로우`문제가 발생하게 된다.

예 : 1999년 -> 2000년

예 : 보잉 787 기의 248 일 이후 재가동 필요 문제
