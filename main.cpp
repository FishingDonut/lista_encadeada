#include <iostream>
#include "lista.h"

int main(){

    Data<std::string> movies{"a", nullptr, nullptr};

    movies.init();

    movies.addLast("b");
    movies.addLast("c");
    movies.addLast("d");
    movies.addLast("e");
    movies.addLast("f");

    Data<std::string> movies2{"a", nullptr, nullptr};

    movies2.init();

    movies2.addLast("b");
    movies2.addLast("z"); 
    movies2.addLast("d");
    movies2.addLast("e");
    movies2.addLast("f");

    bool a = movies.similar(movies2);

    if(a){
        std::cout << "true";
    } else {
        std::cout << "false";
    }
    
    return 0;
}