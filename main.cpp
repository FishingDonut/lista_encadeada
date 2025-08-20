#include <iostream>
#include "lista.h"

int main(){

    Data<std::string> movies{"setimo selo", nullptr, nullptr};

    movies.init();

    movies.addLast("clube da luta");
    movies.addLast("piratas pirado");
    movies.addLast("memento");
    movies.addLast("spider man movie");
    movies.addLast("monty python");

    // movies.showCres();
    
    movies.removeEnd();
    
    movies.showDesc();

    return 0;
}