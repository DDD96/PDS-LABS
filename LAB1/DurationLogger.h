//
// Created by davide on 02/04/20.
//

#ifndef LAB1_DURATIONLOGGER_H
#define LAB1_DURATIONLOGGER_H
#ifndef STRING
#define STRING
#include <string>
#endif
#ifndef TIME_H
#define TIME_H
#include <ctime>
#endif

class DurationLogger {
    std::string name;
    time_t time;
public:
    DurationLogger(const std::string& name );
    ~DurationLogger();

};


#endif //LAB1_DURATIONLOGGER_H
