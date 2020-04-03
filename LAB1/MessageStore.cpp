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

MessageStore::MessageStore(int n):n{n}{
    this->messages = new Message[n];
    this->dim = this->n;
}
MessageStore::~MessageStore(){
    delete[] this->messages;
}
void MessageStore::addMessage(Message &m) {
    std::optional<Message> esiste = this->get(m.getId());
    if (esiste) {
        std::cout << "Messaggio gia' presente!" << std::endl;
    }
    if (!esiste) {
        std::tuple<int, int> a = stats();
        if (std::get<1>(a) >= dim) {
            int new_dim = dim + n;
            Message *nuovo = new Message(new_dim);
            for (int i = 0; i < dim; i++) {
                nuovo[i] = std::move(messages[i]);
            }
            this->messages = nuovo;
            this->dim = new_dim;
        } else {
            for (int i = 0; i < this->dim; i++) {
                if (this->messages[i].getId() == -1) {
                    this->messages[i] = std::move(m);
                    break;
                }
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
}
bool MessageStore::remove(long id){
    for(int i=0; i<dim; i++){
        if(messages[i].getId()==id){
            messages[i] = std::move( Message(-1));
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
    int new_dim = ceil(n/std::get<0>(a));
    Message * nuovo = new Message(new_dim);
    for(int i=0,j=0,z=0; i<dim || j<std::get<0>(a) ; i++){
        if(messages[i].getId()!=-1){
            nuovo[z++]=std::move(messages[i]);
        }else{
            j++;
        }
    }
    this->messages = nuovo;
    this->dim = new_dim;
}










