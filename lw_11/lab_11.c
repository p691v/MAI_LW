#include <stdio.h>
#include <ctype.h>

enum State {
    START,
    READ_OCT,
    FINISH
};

void printBinary(unsigned int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%u", n % 2);
}

int main() {

    enum State currentState = START;
    unsigned int currentNumber = 0;
    char ch;

    while ((ch = getchar()) != EOF) {

        switch (currentState) {
            case START:
                if (isdigit(ch) && ch != '8' && ch != '9') {
                    currentNumber = ch - '0';
                    currentState = READ_OCT;
                }
                break;
            case READ_OCT:
                if (isdigit(ch) && ch != '8' && ch != '9') {
                    currentNumber = currentNumber * 8 + (ch - '0');
                } else if (isdigit(ch) == 0) {
                    printf("Число восьмеричное, его двоичное представление: ");
                    printBinary(currentNumber);
                    printf("\n");
                    currentState = START;
                } else {
                    currentState = START;
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
