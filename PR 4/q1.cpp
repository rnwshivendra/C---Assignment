#include <iostream>
#include <string.h>
using namespace std;

class Message {
private:
    char internalMessage[50];

public:

    Message(char message[]){
      strcpy(this->internalMessage,message);
  }


    void print() {
        cout << "Internal Message: " << internalMessage << endl;
    }

    void print(char additionalMessage[]) {
        cout << "Internal Message: " << internalMessage << endl;
        cout << "Additional Message: " << additionalMessage << endl;
    }
};

int main() {
    Message message1("Hello");
    message1.print();

    Message message2("Hi");
    message2.print("Welcome!");

    return 0;
}
