//
// Created by davide on 01/04/20.
//

#ifndef LAB1_MESSAGE_H
#define LAB1_MESSAGE_H
#ifndef CSTRING
#define CSTRING
#include <cstring>
#endif

class Message {
    long id;
    char* data;
    int size;
    static long progressive;
    static long count;

public:
    Message();
    Message(int n);
    Message(const Message& src);
    Message(Message&& src);
    Message& operator=(const Message& src);
    Message& operator=(Message&& src);
    ~Message();
    const long getId() const;
    const char *getData() const;
    const int getSize() const;
    void setId(long id);
    void setData(char *data);
    void setSize(int size);

private:
    char* mkMessage(int n);
    //void delMessage(char* m);
};
std::ostream& operator<<(std::ostream& out, const Message& m);


#endif //LAB1_MESSAGE_H
