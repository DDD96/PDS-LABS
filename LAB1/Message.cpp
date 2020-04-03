//
// Created by davide on 01/04/20.
//
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
#ifndef CSTRING
#define CSTRING
#include <cstring>
#endif
#include "Message.h"

#define debug true
long Message::progressive=1;
long Message::count=0;
    Message::~Message(){
        delete[] this->data;
        if constexpr (debug) std::cout<<"Message::Distruttore"<<std::endl;
        count--;
        if(count == 0) {
            std::cout << "TUTTO PULITO!" << std::endl;
        }
    }
    Message::Message() {
        this->id = -1;
        this->size = 0; //15
        this->data = mkMessage(this->size);
        count++;
        if constexpr (debug) std::cout<<"Message::base constructor"<<std::endl;
    }

    Message::Message(const Message& src)/*:size(src.size)*/{
        this->size = src.size;
        this->id = this->progressive++;
        this->data = new char[this->size+1];
        //std::copy(src.getData(), this->size, this->data);
        std::memcpy(this->data, src.data, this->size+1);
        count++;
        if constexpr (debug) std::cout<<"Message::Copy constructor"<<std::endl;
    }

    Message::Message(int i) {
    this->id = this->progressive++;
    this->size = i;
    if (i == -1) {
        this->id =-1;
        this->data = mkMessage(0);
    } else {
        this->data = mkMessage(this->size);
    }
    count++;
    if constexpr (debug) std::cout<<"Message::Default constructor"<<std::endl;
}

    Message::Message(Message&& src):size(src.size){
        this->id = this->progressive++;
        this->data = src.data;
        src.data = nullptr;
        count++;
        if constexpr (debug) std::cout<<"Message::Movement constructor"<<std::endl;
}

    Message& Message::operator=(const Message& src){
        if constexpr (debug) std::cout<<"Message::Assignment operator"<<std::endl;
        if(this!= &src){
            delete[] this->data;
            this->data = nullptr;
            this->size = src.size;
            this->data = new char[this->size+1];
            memcpy(this->data, src.getData(), this->size+1);
        }
        return *this;
    }

    Message& Message::operator=(Message&& src){
        if constexpr (debug) std::cout<<"Message::Movement operator"<<std::endl;
        if(this!=&src){
            delete[] this->data;
            this->size = src.size;
            this->data = src.data;
            src.data = nullptr;
        }
        return *this;
    }

const long Message::getId() const {
    return id;
}
const char *Message::getData() const {
    return data;
}
const int Message::getSize() const {
    return size;
}

void Message::setId(long id) {
    Message::id = id;
}
void Message::setData(char *data) {
    Message::data = data;
}
void Message::setSize(int size) {
    Message::size = size;
}

char* Message::mkMessage(int n){
    std::string vowels = "aeiou";
    std::string consonants = "bcdfghlmnpqrstvz";
    char* m = new char[n+1];
    for(int i=0; i<n; i++){
        m[i]= i%2 ? vowels[rand()%vowels.size()] :
              consonants[rand()%consonants.size()];
    }
    m[n]='\0';
    return m;
}
std::ostream& operator<< (std::ostream& out, const Message& m){
    //std::string s;
    out << "[ id : " << m.getId() << " [ dim : " << m.getSize() << " ] [ message : " << m.getData() << " ]";
    return out;
}






/*
// CONTROLLARE!!
void Message::delMessage(char* m){   //eliminare il message
    delete[] m;
    return;
}*/
/*
std::string Message::print(){
      std::string s = "";
      s+= "[ id : ";
      s+= this->getId();
      s+= " [ dim : ";
      s+= this->getSize();
      s+= " ] [ message : ";
      s+= this->getData();
      s+= " ]";
  }*/
