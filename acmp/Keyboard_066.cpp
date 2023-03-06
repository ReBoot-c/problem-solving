#include <iostream>
#include <algorithm>

using namespace std;
// Задача: https://acmp.ru/index.asp?main=task&id_task=66
int main() {
    const string KEYBOARD = "qwertyuiopasdfghjklzxcvbnm";

    char character;
    cin >> character;

    // 1 способ
    for (int i = 0; i < KEYBOARD.length(); i++) {
        if (KEYBOARD[i] == character) {
            cout << KEYBOARD[(i + 1) % KEYBOARD.length()] << endl;
            break;
        }
    }

    // 2 способ
    int index = KEYBOARD.find(character);
    if (index != string::npos) {
        cout << KEYBOARD[(index + 1) % KEYBOARD.length()] << endl;
    }

    return 0;
}
