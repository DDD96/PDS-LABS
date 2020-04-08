//
// Created by davide on 02/04/20.
//
#ifndef OPTIONAL
#define OPTIONAL
#include <optional>
#endif
#ifndef TUPLE
#define TUPLE
#include <tuple>
#endif
#ifndef MATH
#define MATH
#include <cmath>
#endif
#include "MessageStore.h"

Message *MessageStore::getMessages() const {
    return messages;
}
int MessageStore::getDim() const {
    return dim;
}
int MessageStore::getN() const {
    return n;
}

MessageStore::MessageStore(int n):n{n},dim{0},messages{new Message[n]}{
    this->dim = this->n;
}
MessageStore::~MessageStore(){
    delete[] this->messages;
}
void MessageStore::add(Message &m) {
    std::optional<Message> presente = this->get(m.getId());
    if (presente) {
        std::cout << "Messaggio gia' presente!" << std::endl;
    }
    if (!presente) {
        std::tuple<int, int> a = stats();
        if (std::get<0>(a) >= dim) { // da riallocare il messages
            int new_dim = dim + n;
            Message *nuovo = new Message[new_dim];
            for (int i = 0; i < dim; i++) {
                nuovo[i] = std::move(messages[i]);
            }
            delete [] this->messages;
            this->messages = nuovo;
            this->dim = new_dim;

        }
        for (int i = 0; i < this->dim; i++) {
            if (this->messages[i].getId() == -1) {
                this->messages[i] = std::move(m);
                break;
            }
        }
    }
}

std::optional<Message> MessageStore::get(long id) {
    //non lo rimuove
    for (int i = 0; i < dim; i++) {
        if (messages[i].getId() == id) {
            return std::optional<Message>{messages[i]};
        }
    }
    return {};
}
bool MessageStore::remove(long id){
    Message *m;
    for(int i=0; i<dim; i++){
        if(messages[i].getId()==id){
            m = new Message();
            messages[i] = std::move( *m);
            delete m;
            return true;
        }
    }
    return false;
}
std::tuple<int, int> MessageStore::stats(){
    int full=0,empty=0;
    for(int i=0; i<dim; i++){
        if(messages[i].getId()==-1){
            empty++;
        }else{
            full++;
        }
    }
    return std::make_tuple(full,empty);
}
void MessageStore::compact(){
    std::tuple<int, int> a = stats();
    int new_dim = ceil(std::get<0>(a)/n)*n +n;
    Message *store = new Message[new_dim];
    for(int i=0, z=0; i<this->dim ; i++){
        if(this->messages[i].getId() != -1){
            store[z++]=std::move(messages[i]);
            //delete &messages[i];
        }
    }
    delete [] this->messages;
//    for(int i=0; i<this->dim; i++){
//        delete &(this->messages[i]);
//    }
    this->messages = store;
    this->dim = new_dim;
}










