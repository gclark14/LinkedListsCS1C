#include <iostream>
#include "theClass.h"

int main(){
    List<int> list;
    List<int> list2;
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);

    list.print_items();
    std::cout << "\n\n";

    list.makeReverseCopy(list2);
    list2.print_items();


    int sum = 0;
    for(int i = 0; i <= 12; i += 2){
        sum += 3 * 2 * (i * i);
    }
    std::cout<< '\n' << sum << '\n';

    return 0;
}
