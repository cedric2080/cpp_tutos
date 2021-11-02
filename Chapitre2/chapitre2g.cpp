#include <iostream>
#include <list>

auto fonction() -> void {
    int = 0;

    // 
    for (int i=; i<10; i++)
         if (i > 5) return
}

auto main() ->int{

    std::list<int> liste = {2,6,4,5,6,7,3,4,56,43,42};

    int tab[10][10];
    bool sortie = false;

    for (auto i(0); i < 10; i++) {
        if(i == 5) continue;
        for (auto j(0); j < 10; j++) {
            tab[i][j] = i * j;

            if (j == 5) {
                sortie = true;
                break;
            }
        }
    }

    return 0;
}