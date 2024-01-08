# 덱 ( deque )

## Deque ( Double - ended Queue )

: 양쪽에서 삽입, 삭제가 다 이뤄질 수 있는 자료구조

## C++ 에서의 덱 사용법

1. 덱 라이브러리
    
    ```cpp
    #include <deque> 
    ```
    

1. 선언
    
    ```cpp
    deque <int> dq; // dq라는 이름의 int형 deque을 선언
    ```
    

1. 기본함수
    
    ```cpp
    dq.push_front(element) // 앞에 원소 추가
    
    dq.push_back(element) // 뒤에 원소 추가
    
    dq.pop_front() // 제일 앞에 있는 원소 삭제
    
    dq.pop_back() // 제일 뒤에 있는 원소 삭제
    
    dq.front() // 맨 앞 원소 반환
    
    dq.back() // 맨 뒤 원소 반환
    
    dq.empty() // 비어있으면 true 값 반환
    
    dq.size() // 덱의 사이즈 반환 => int 형태
    ```
    

---

오늘 ssh 터널링에서 하루종일 막혀있는 바람에 

알고리즘 문제를 풀 시간이 없어서 미뤄왔던 덱을 한번 스윽 훑어보았다

queue랑 거의 비슷한 것 같다.

내일 부터 문제 화이팅하길