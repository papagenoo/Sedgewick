#ifndef WDCOUNT_H
#define WDCOUNT_H
// подсчет числа слов в предложении с использованием перечислений
#include <iostream>
using namespace std;
//#include <conio.h>
enum itsaWord { NO, YES };

int wdcount()
{
    itsaWord isWord = NO;

    char ch = 'a';
    int wordcount = 0;
    cout << "Введите предложение: \n";
    do {
        ch = getchar();
        if (ch == ' ' || ch == '\r') {
            if (isWord == YES) {
                wordcount++;
                isWord = NO;
            }
        } else {
            if (isWord == NO) {
                isWord = YES;
            }
        }
    } while (ch != '\r');

    cout << "\n---Число слов: " << wordcount << "---\n";
    return wordcount;
}

#endif // WDCOUNT_H
