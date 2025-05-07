#include <stdio.h>
#include <string>

class CBase {
public:
    virtual std::string kkk() = 0; // 순수 가상 함수

    void WhoAreYou() {
        std::string tmp = kkk();
        printf("%s", tmp.c_str());
        printf("--------\n");
        printf("레전드교수님\n");
        printf("실습이 경쟁력이다\n");
        printf("오케이!\n");
    }
};

class CDrived : public CBase {
public:
    std::string kkk() override {
        return "kkk\n";
    }
};

int main() {
    CDrived gildong;
    gildong.WhoAreYou();
    return 0;
}
