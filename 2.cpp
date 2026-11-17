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
