#include <iostream>
#include <algorithm>

using namespace std;
/* Задача: https://acmp.ru/index.asp?main=task&id_task=66
Для данной буквы английского алфавита нужно вывести справа стоящую букву на стандартной клавиатуре. 
При этом клавиатура замкнута, т.е. справа от буквы «p» стоит буква «a», от буквы «l» стоит буква «z», 
а от буквы «m» — буква «q».
*/
int main() {
    const string KEYBOARD = "qwertyuiopasdfghjklzxcvbnmq";

    char character;
    cin >> character;

    // 1 способ
    for (int i = 0; i < KEYBOARD.length();i++) { 
        if (KEYBOARD[i] == character) {
            cout << KEYBOARD[i % KEYBOARD.length()] << endl;
            break;
        }
    }

    // 2 способ
    int index = KEYBOARD.find(character); 
    if (index != string::npos) {
        cout << KEYBOARD[index % KEYBOARD.length()] << endl;
    }

    return 0;
}
