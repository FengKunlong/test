//
// 演示C++程序到C程序翻译
//

#include <iostream>

struct CCar{
    int price;
};
void SetPrice(struct CCar* the,int p){
    the->price = p;
}

int main(){
    struct CCar car;
    SetPrice(&car, 20000);
    return 0;
}

