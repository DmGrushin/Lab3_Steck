#include <iostream>
#include "Steck.h"

int main()
{
    TSteck<char> steckSymbol(5);
    char ch;

    for (int i = 0; i < 5; i++)
    {
        cout << "Elem: ";
        cin >> ch;
        steckSymbol.push(ch);
    }
    cout << endl;
    cout << steckSymbol;

    cout << "\n\nRemove an item from the steck\n";
    steckSymbol.del();

    cout << steckSymbol;

    TSteck<char> newSteck(steckSymbol);

    cout << "\n\nCopy constructor worked\n";
    cout << newSteck;

    cout << "The second element in the queue: " << newSteck.Peek(2) << endl;

    TSteck<int> test(5);
    int t;
    for (int i = 0; i < 5; i++)
    {
        cout << "Elem: ";
        cin >> t;
        test.push(t);
    }

    cout << "TEST PEEK   " << test.Peek(2) << endl;
    cout << test.min_elem();
    cout << endl << test.max_elem();
    test.file();

    return 0;
}
