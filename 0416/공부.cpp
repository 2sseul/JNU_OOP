#include <stdio.h>

class Cpoint{
    private:
        int m_iX;
        int m_iY;
    
    public:
        void Assign(int x, int y);
        int Add();
};

void Cpoint::Assign(int x, int y){
    m_iX = x;
    m_iY = y;
}

int Cpoint::Add(){
    return m_iX+m_iY;
}

void main(){
    Cpoint gildong;
    gildong.Assign(2, 3);
    int iResult = gildong.Add();
    printf("두 수의 합은: %dn", iResult);
}
