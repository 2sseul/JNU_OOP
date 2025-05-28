#include <stdio.h>

class Database{ // 클래스는 객체 만들라고 있는 것
    friend Database& operator <<(Database & babo, int b);
    private:
        int data;

    public:
        void Set(int a){
            data = a;
        }
        void Draw(){
            printf("값은 = %d\n", data);
        }
        void operator << (int b){
            data = b;
        }
};

Database& operator <<(Database & babo, int b){
    babo.data = b;
    printf("data 값은 = %d\n", babo.data);
}

int main(){
    Database gildong;
    gildong.Set(3);
    operator <<(gildong, 7); // gildong << 7 과 문법적으로 같은 의미
    gildong << 2;
    gildong.Draw();
    return 0;
}
