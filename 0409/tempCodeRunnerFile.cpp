
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