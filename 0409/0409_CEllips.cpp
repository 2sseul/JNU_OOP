#include <stdio.h>

class Point{
    protected:
        int iX;
        int iY;

    public:
        void Assign(int a,int b){
            iX = a;
            iY = b;
        };

        int Add(){
            return iX + iY;
        };

};

class Circle: public Point{
    protected:
        int iRadius;
    public:
        int SetRadius(int n){
            iRadius = n;
        };

        int Area(){
            return iRadius*iRadius*3.14;
        };

        void Move(int x,int y){
            iX += x;
            iY += y;
        };


};


class Ellipse : public Circle{
    private:
        int iRadius2;

    public:
        void SetRadius2(int r){
            iRadius2 = r;
        };

        double Area(){
            return 3.14*iRadius*iRadius2;
        }

        void ShowTitle(){
            
        }
};


int main(){
    Ellipse youngsu;
    Circle youngja;
    youngsu.SetRadius(10);
    youngsu.SetRadius2(1);

    youngsu.Assign(7,8);
    youngsu.Move(1,1);
    youngsu.ShowTitle();
    double dArea = youngsu.Area();
    printf("Area: %f\n",dArea);
};