import csv

f = open('temp_ice.csv', encoding='euc-kr')              # temp_ice.csv 파일 열기
data = csv.reader(f)                  # temp_ice.csv 파일 속 데이터를 data로 저장하기
header = next(data)                   # 헤더 처리    
temp = []                             # 평균 기온 데이터 저장을 위한 리스트 생성하기
ice = []                              # 아이스크림 쇼핑 데이터 저장을 위한 리스트 생성하기

# 전체 데이터를 행별로 temp 리스트, ice 리스트에 저장 및 출력하기
# 실습 : data에서 한 행씩 처리 하기

# 행별로 평균 기온 데이터 저장하기 1번위치
# 행별로 아이스크림/빙수 데이터 저장하기 4번위치

for row in data:
    temp.append(float(row[1]))
    ice.append(int(row[4]))


print(temp)                           # temp 리스트 출력하기
print(ice)                            # ice 데이터 출력하기
 
print(min(temp), max(temp))
print(min(ice), max(ice))
