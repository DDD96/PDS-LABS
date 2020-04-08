#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif

#ifndef MESSAGE_H
#define MESSAGE_H
#include "Message.h"
#include "DurationLogger.h"
#include "MessageStore.h"
#endif

#ifndef TIME_H
#define TIME_H
#include <ctime>
#endif

void primo(){

    Message m1(10);
    Message m2(20);
    std::cout << m1 << std::endl << m2 << std::endl;
    // M3 COSTRUTTORE DI COPIA OK
    Message m3(m2);
    //m1.setData("modificato m1");
    std::cout << m1 << std::endl << m2 << std::endl << m3 << std::endl;
    // M4 COSTRUTTORE DI MOVIMENTO OK
    Message m4( std::move(m2));
    std::cout << m1 << std::endl;// << m2 << std::endl;
    std::cout << m3 << std::endl << m4 << std::endl;
    //  OPERATORE DI ASSEGNAZIONE OK
    m2 = m3;
    std::cout << m1 << std::endl << m2 << std::endl;
    std::cout << m3 << std::endl << m4 << std::endl;
    // OPERATORE DI MOVIMENTO
    m1=(std::move(m4));
    std::cout << m1 << std::endl << m2 << std::endl;
    std::cout  << m3 << std::endl; // << m4 << std::endl


}
void secondo(){

    Message buff1[10];
    /*for(int i=0; i<10; i++){
        std::cout<<buff1[i].getData()<<std::endl;
    }*/
    std::cout << "secondo" << std::endl;
    Message *buff2 = new Message[10];
    delete [] buff2;
//    for(int i=0; i<10; i++ ){
//        delete &(buff2[i]);
//    }
/*
    for(int i=0; i<10; i++){
        std::cout<<buff2[i].getData()<<std::endl;
    }
*/

    //std::cout<<buff1[0].getData()<<std::endl;
    //Message m1(5);
    //Message m2(10);
    std::cout<<buff1[0].getData()<<std::endl;
    buff1[0] = Message(100);
    //buff2[0] = (std::move(new Message(5)));
    std::cout<<buff1[0].getData()<<std::endl;

}
void terzo(){
    Message buff1[10];
    Message buff2[10];
    std::cout<<buff1[0].getData()<<std::endl;
    for(int i=0; i<10; i++){
        buff1[i] = Message(10000000);
    }
    clock_t t1 = std::clock();
    // copia
    for(int i=0; i<10; i++){
//        buff2[i] = buff1[i];
        buff2[i] = std::move(buff1[i]);
    }
    clock_t t2 = std::clock();
    //copia 2)
    for(int i=0; i<10; i++){
//        buff2[i] = buff1[i];
        buff2[i] = std::move(buff1[i]);
    }
    clock_t t3 = std::clock();
    //
    std::cout << "Copia per assegnamento : " << t2 - t1 << std::endl;
    std::cout << "Copia per movimento : " << t3 - t2 << std::endl;
//

}
void terzo_bis(){

    Message buff1[10];
    Message buff2[10];
    std::cout<<buff1[0].getData()<<std::endl;
    for(int i=0; i<10; i++){
        buff1[i] = Message(10000000);
    }
    //clock_t t1 = std::clock();
    DurationLogger t1("assegnamento");
    // copia
    for(int i=0; i<10; i++){
        buff2[i] = buff1[i];
//        buff2[i] = std::move(buff1[i]);
    }
    /*clock_t t2 = std::clock();
    //copia 2)
    for(int i=0; i<10; i++){
//        buff2[i] = buff1[i];
        buff2[i] = std::move(buff1[i]);
    }
    clock_t t3 = std::clock();
    //
    std::cout << "Copia per assegnamento : " << t2 - t1 << std::endl;
    std::cout << "Copia per movimento : " << t3 - t2 << std::endl;
//
*/
}
void quarto(){
    DurationLogger d1("main()");
    Message buff1[10];
    Message buff2[10];
    std::cout<<buff1[0].getData()<<std::endl;
    for(int i=0; i<10; i++){
        buff1[i] = Message(10000000);
    }

}
void quinto(){
//    problema: inserisce qualcosa il cui identificativo esiste gia'
    MessageStore store = MessageStore(3);
//    Message *m = new Message(1024*1024) ;
    int aggiunte = 3;
    for(int i=0; i<aggiunte; i++) {
        Message *m = new Message(1024*1024);
        store.add(*m);
        delete m;
    }
/*
    std::cout << "ARRIVATO!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
    for(int i=0; i<store.getDim(); i++) {
        //m = new Message(1024*1024);
        std::cout << store.getMessages()[i].getId() << std::endl;
    }
    //cancello 50
    for(int i=0; i<store.getDim(); i++) {
        if(i%2 == 0){
            store.remove(store.getMessages()[i].getId());
        }
    }
    for(int i=0; i<store.getDim(); i++) {
        //m = new Message(1024*1024);
        std::cout << store.getMessages()[i].getId() << std::endl;
    }

    store.compact();
    for(int i=0; i<store.getDim(); i++) {
        //m = new Message(1024*1024);
        std::cout << store.getMessages()[i].getId() << std::endl;
    }
*/
}
int main() {
    quinto();
    return 0;
}
