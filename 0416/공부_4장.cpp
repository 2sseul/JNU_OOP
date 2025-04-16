#include <stdio.h>

int CPoint::Add(){
    iSum = m_iX + m_iY;
    return iSum;
}

int CPoint::Add(){
    Assign(7, 8);

    iSum = m_iX + m_iY;
    PrintResult();

    return iSum;
}