#include <iostream>
#include <string>
#include <cstdlib>

auto function(std::string lang) -> std::string{
    auto retval ="Hello";
    
    if (lang == "fr") {
        retval = "Salut";
    }
    else if (lang == "de") {
        retval = "Hallo";
    }
    else {
        retval ="Hello";
    }

    return retval;
}

auto main() ->int{
    
    std::cout << function("fr");
    std::cout << function("de");
    std::cout << function("en");    

    return 0;
}