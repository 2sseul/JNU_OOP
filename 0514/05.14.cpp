#include <stdio.h>

void say(){
    printf("Hello, World!");
}

void hi(){

}

int main(){
    void (*pp)();
    pp = say;
    pp();

    int a[3][2] = {{1,2},{3,4},{5,6}};
    int(*p)[2];
    p = a;
    
    int imsi = **p;
    int imsi2 = p[1][1];
    int imsi3 = a[1][1];

    printf("%d\n", imsi);
    // 중괄호를 앞으로 보내고 소괄호를 뒤로
    // 소중앞출 소제거 -> 7장
    return 1;
}