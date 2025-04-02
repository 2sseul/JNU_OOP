#include <stdio.h>

class XXX{
    private:
        int iX;
        int iY;

    public:
        void Assign(){
            printf("나 태어났어~!\n");
        }
        int Add(){
            printf("나 갈테니 잘들 살아라~\n");
        }
};

// 아웃오브라인(out-of-line)함수
void XXX::Assign(){
    iX = 2;
    iY = 3;
}

// 아웃오브라인(out-of-line)함수
int XXX::Add(){
    return iX + iY;
}

int main(){
    printf("==========\n");
    {
        XXX gildong; //객체가 생성될 때 자동으로 실행되는 멤버함수: 생성자 함수
        gildong.Assign();

        int iResult = gildong.Add();

        printf("결과 = %d\n", iResult);
    }
    printf("gildong이는 이미 죽었음");
}