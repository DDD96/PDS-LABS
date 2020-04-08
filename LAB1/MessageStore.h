//
// Created by davide on 02/04/20.
//
#ifndef LAB1_MESSAGESTORE_H
#define LAB1_MESSAGESTORE_H
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
#ifndef MESSAGE_H
#define MESSAGE_H
#include "Message.h"
#endif
#ifndef OPTIONAL
#define OPTIONAL
#include <optional>
#endif
#ifndef TUPLE
#define TUPLE
#include <tuple>
#endif

class MessageStore {
    Message *messages;
    int dim; //dimensione corrente array
    int n; // incremento della memoria
public:
    MessageStore(int n);
    ~MessageStore();
    void add(Message& m);
    // inserisce un nuovo messaggio o sovrascrive quello precedente
    //se ce n’è uno presente con lo stesso id
    std::optional<Message> get(long id);
    // restituisce un messaggio se presente
    bool remove(long id);
    // cancella un messaggio se presente
    std::tuple<int, int> stats();
    void compact();

    Message *getMessages() const;

    int getDim() const;

    int getN() const;
};


#endif //LAB1_MESSAGESTORE_H
