# lz-9
# Завання 1 
<img width="895" height="69" alt="image" src="https://github.com/user-attachments/assets/37db8b24-b8b3-46c8-b0e8-c4a7237348ea" />

## Список заповнюється за допомогою генератора псевдовипадкових чисел rand(), що забезпечує унікальність наборів даних при кожному запуску програми, тоді як програма послідовно перебирає згенеровані елементи через цикл, перевіряє їх на кратність п'яти (num % 5 == 0) і під час виведення автоматично додає символ !

```
#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> numList = {7, 15, 42, 25, 8, 50, 3, 10, 19};
    
    cout << "Початковий список: ";
    for (int num : numList) {
        cout << num << " ";
    }
    cout << endl;

    forward_list<int> result;
    
    for (int num : numList) {
        result.push_front(num);
    }
    result.reverse();

    cout << "Список після вставки символу '!': ";
    for (int num : numList) {
        cout << num;
        if (num % 5 == 0) {
            cout << " !";
        }
        cout << " ";
    }
    cout << endl;

    return 0;
}
```
<img width="1590" height="677" alt="image" src="https://github.com/user-attachments/assets/6b93d883-7726-474f-9356-e04db255d0d4" />

# Завання 2
<img width="858" height="58" alt="image" src="https://github.com/user-attachments/assets/54e159a4-db09-47b3-8377-4eb274331eea" />

## У цьому рішенні створюється однозв'язний список дійсних чисел std::forward_list<double>, який представляє швидкості автомобіля за певні проміжки часу. Програма ініціалізує початкові значення для мінімальної та максимальної швидкості першим елементом списку, після чого за допомогою циклу перебирає всі елементи, оновлюючи екстремальні значення, підраховуючи загальну суму та кількість елементів для подальшого обчислення середньої швидкості. На завершення програма виводить на екран початковий список швидкостей разом із розрахованими максимальним, мінімальним та середнім показниками.
```
#include <iostream>
#include <forward_list>
#include <iomanip>

using namespace std;

int main() {
    forward_list<double> carSpeeds = {65.5, 82.0, 48.3, 95.0, 73.4, 110.2, 52.1};

    cout << "Список швидкостей автомобіля: ";
    for (double speed : carSpeeds) {
        cout << speed << " ";
    }
    cout << endl;

    auto it = carSpeeds.begin();
    if (it == carSpeeds.end()) {
        cout << "Список швидкостей порожній!" << endl;
        return 0;
    }

    double maxSpeed = *it;
    double minSpeed = *it;
    double sum = 0.0;
    int count = 0;

    for (double speed : carSpeeds) {
        if (speed > maxSpeed) {
            maxSpeed = speed;
        }
        if (speed < minSpeed) {
            minSpeed = speed;
        }
        sum += speed;
        count++;
    }

    double avgSpeed = sum / count;

    cout << "Максимальна швидкість: " << maxSpeed << " км/год" << endl;
    cout << "Мінімальна швидкість:  " << minSpeed << " км/год" << endl;
    cout << "Середня швидкість:     " << fixed << setprecision(2) << avgSpeed << " км/год" << endl;

    return 0;
}
```
<img width="1608" height="878" alt="image" src="https://github.com/user-attachments/assets/160e8727-c504-44a5-bfd9-285a8f6d02e7" />

## Висновок
Під час виконання лабораторної роботи було практично освоєно особливості роботи зі структурами даних у C++, зокрема з однозв'язними списками (std::forward_list), а також закріплено навички ініціалізації списків, динамічного додавання й видалення елементів за допомогою стандартних методів і використання ітераторів для обходу елементів. У ході роботи було успішно реалізовано алгоритми обробки даних: в першому завданні відпрацьовано умову перевірки елементів за заданим критерієм кратності з виведенням додаткових символів, а в другому розроблено алгоритм аналізу числових даних швидкостей автомобіля для ефективного знаходження максимального, мінімального та середнього значень. Отримані результати підтверджують ефективність використання бібліотеки <forward_list> для вирішення прикладних задач обробки послідовностей даних із мінімальними накладними витратами на пам'ять.
