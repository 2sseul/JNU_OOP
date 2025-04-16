#include <stdio.h>

class CPoint{
    int iX;
    int iY;

    // iX = x; 
    // iY = y; 
    // 코드 두 줄을 Assign함수로 추상화
    public:
    void Assign(int x, int y){
        iX = x;
        iY = y;
    }

    // iX + iY 코드 한 줄을 Add함수로 추상화
    int Add(){
        return iX + iY;
    }
};

CPoint gildong;

int main(){
    int iResult;

    gildong.Assign(2, 3);

    iResult = gildong.Add();

    printf("두 개의 값을 더한 결과: %d\n", iResult);

    return 0;
}
