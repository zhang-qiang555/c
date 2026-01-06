#include "hello.h"


void HELLO::say_hello()
{
    cout << "hello world"<< endl;
};

int main()
{
    HELLO my_hello;

    my_hello.say_hello();

    return 0;
}