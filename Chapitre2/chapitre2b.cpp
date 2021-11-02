#include <iostream>
#include <string>
#include <cstdlib>

auto function(int lang) -> std::string{
    auto retval ="Hello";
/*
    if (lang == "fr") {
        retval = "Salut";
    }
    else if (lang == "de") {
        retval = "Hallo";
    }
    else {
        retval ="Hello";
    }
 */
    switch (lang) {
    case 0 :
        retval = "Salut";
        break;
    case 1 :
        retval = "Hallo";
        break;
    default:
        retval = "Hello";
    }   

    return retval;
}

auto main() ->int{
    
    std::cout << function(0);
    std::cout << function(1);
    std::cout << function(2);    

    return 0;
}