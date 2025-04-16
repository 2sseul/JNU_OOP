#include <stdio.h>

class Point{
    protected: // 상속, 재사용하는 코드에서 iX, iY 엑세스 하기 위해서 protected 설정해뒀구나~
        int iX;
        int iY;

    public:
        void Assign(int a, int b){
            iX = a;
            iY = b;
        }
    public:
        int Add(){
            return iX + iY;
        }
};

class Circle : public Point{ 
    // Point에 있는 멤버변수가 Circle로 넘어오기 때문에 Circle에 있는 멤버변수는 총 3개가 된다.
    // 다중상속시 class Circle : public Point, public Triangle , ... 이렇게 콤마 적어서 한다. 
    // 눈에 보이는 변수는 1개인데, Point로 받아왔으니까 총 3개(코드 재사용/상속)
    private:
    int iRadius;

    public:
        void SetRadius(int r){
            iRadius = r;
        }
        void Move(int x, int y){
            iX = iX + x;
            iY = iY + y;
        };
};

Point gildong;
Circle youngja;

void main(){
    youngja.Assign(3, 4);
    youngja.SetRadius(5);
    youngja.Move(6,7);
    gildong.Assign(3, 4);
}