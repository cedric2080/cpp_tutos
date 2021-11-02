#include <iostream>
#include <list>

auto main() ->int{

    std::list<int> liste = {2,6,4,5,6,7,3,4,56,43,42};

    int tab[] = {2,6,4,5,6,7,3,4,56,43,42};

    for (auto v1 : liste) {
        
        std::cout << " valeur tab " << v1 << std::endl;
        
        for (auto v2 :tab) {

            std::cout << " valeur liste " << v2<< std::endl;    

        }
        

    }

    return 0;
}