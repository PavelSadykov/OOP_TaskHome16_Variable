//
//  main.cpp
//  ООП ДЗ 16 Вариативный шаблонный класс
//
//  Created by Павел on 29.01.2023.
//

#include <utility>
#include <vector>
#include <cassert>
#include <iostream>

template<typename...T>
class MyClass{
public:

void sum_all(T...args){
    auto  sum =  (args+...);

    std::cout<<"Сумма значений всех типов : "<<sum<<std::endl;
}
};

int main(int argc, const char * argv[]) {
    MyClass<int,float,double> h;
    h.sum_all(1,2.1,3.445);
    
    
    return 0;
}
