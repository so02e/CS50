print("학점 프로그램")
print("종료를 원하면 999를 입력")
print("[학점 테이블]")

table = {'A+': 95,'A': 90,'B+': 85,'B': 80,'C+': 75,'C': 70,'D+': 65,'D': 60,'F': 0}
keyList = list(table.keys())
values = list(table.values())

print(keyList)
print(values)

def calgrade(score):
    for i in range(0, 8):
        if score >= values[i] :
            return(keyList[i])
        else:
            i += 1

while True:
    grade = int(input("성적을 입력하세요 (0~100) : "))

    if grade == 999:
        break
    elif grade > 100 or grade < 0 :
        print("성적을 올바르게 입력하세요! 범위는 0~100입니다!")
    else:
            print("학점은 ",calgrade(grade),"입니다.")