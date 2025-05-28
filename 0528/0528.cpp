#include <stdio.h>

class Database {
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
};

Database& operator <<(Database & babo, int b){
    babo.data = b;
    printf("data 값은 = %d\n", babo.data);
    return babo;
}

int main(){
    Database gildong, youngja;
    gildong.Set(3);
    gildong << 7;
    gildong << 2;
    gildong.Draw();

    youngja = gildong;
    youngja.Draw();
    return 0;
}
