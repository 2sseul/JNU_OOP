#include <stdio.h>

class My { // 객체 youngja, gildong, cheolsu

    public:
        static int a; // static: 여러 객체들이 공유하는 변수 선언
    My(){ // 생성자
        a = a+1;
        printf("%d\n", a);
    }
    ~My(){ // 소멸자
        a = a-1;
    }
};

int My::a = 0;

int main(){
    My gildong;
    My cheolsu;
    My youngja;
    
}