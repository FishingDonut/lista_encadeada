#include <iostream>

template <typename T>
struct Data
{
    T value;
    Data *previous;
    Data *next;

    // inicializa
    void init()
    {
        previous = nullptr;
        next = nullptr;
    }

    // verifica se e o primeiro
    bool isFirst()
    {
        return previous == nullptr;
    }

    // verifica se e o ultimo
    bool isEnd()
    {
        return next == nullptr;
    }

    //pega o primeiro
    Data<T> *getFirts()
    {
        Data<T> *aux = this;

        while (aux->previous != nullptr)
        {
            aux = aux->previous;
        }

        return aux;
    }

    //pega o ultimo
    Data<T> *getEnd()
    {
        Data<T> *aux = this;

        while (aux->next != nullptr)
        {
            aux = aux->next;
        }

        return aux;
    }

    //procura pelo elo de acordo com o valor
    Data<T> *seekElo(T value_seek){
        Data<T> *aux = getEnd();

        while(aux->value != value_seek){
            aux = aux->next;
        }

        return aux;
    }

    // adiciona no fim
    void addEnd(T value)
    {
        Data<T> *data = new Data<T>();
        data->init();

        Data<T> *aux = getEnd();

        data->previous = aux;
        data->value = value;
        aux->next = data;

        std::cout << "Add value: " << value << std::endl;
    }

    // adiciona no comeco
    void addStart(T value)
    {
        Data<T> *data = new Data<T>();
        data->init();

        Data<T> *aux = getFirts();

        data->next = aux;
        data->value = value;
        aux->previous = data;

        std::cout << "Add value: " << value << std::endl;
    }

    // mostrar em ordem cres
    void showCres()
    {
        Data *aux = getFirts();
        while (aux != nullptr)
        {
            std::cout << aux->value << std::endl;
            aux = aux->next;
        }
    }

    // mostrar em ordem desc
    void showDesc()
    {
        Data *aux = getEnd();
        while (aux != nullptr)
        {
            std::cout << aux->value << std::endl;
            aux = aux->previous;
        }
    }

    void removeEnd(){
        Data *aux = getEnd();

        aux->previous->next = nullptr;
        aux->init();

        delete aux;
    }
};
