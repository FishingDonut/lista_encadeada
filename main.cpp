#include <iostream>
#include "lista.h"

int main(){

    Data<std::string> movies{"setimo selo", nullptr, nullptr};

    movies.init();

    movies.addEnd("clube da luta");
    movies.addEnd("piratas pirado");
    movies.addEnd("memento");
    movies.addEnd("spider man movie");
    movies.addEnd("monty python");

    // movies.showCres();
    
    movies.removeEnd();
    
    movies.showDesc();

    return 0;
}