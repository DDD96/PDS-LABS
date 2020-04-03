//
// Created by davide on 02/04/20.
//
#include "DurationLogger.h"
#ifndef IOSTREAM
#define IOSTREAM
#include <iostream>
#endif
#ifndef CSTRING
#define CSTRING
#include <cstring>
#endif
#ifndef TIME_H
#define TIME_H
#include <ctime>
#endif
DurationLogger::DurationLogger(const std::string& name ):name{name}{
    std::time(&(this->time));
    std::cout << ">>>>>>>>>>>>>> starting [ " << this->name <<" ]" << std::endl;
}

DurationLogger::~DurationLogger(){
    time_t time_f;
    std::time(&(time_f));
    std::cout << "<<<<<<<<<<<<<<< ending [" << this->name
            <<" ] : [ "<< difftime(time_f,this->time) << " ] sec" << std::endl;
//    std::cout << "Funzione : " << this->name << " Durata"
//                << difftime(time_f,this->time) << std::endl;
}