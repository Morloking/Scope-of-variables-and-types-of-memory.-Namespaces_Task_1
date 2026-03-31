#include <iostream>

void counting_function() {
    static int count{1};
    std::cout << "Количество вызовов функции counting_function(): " << count << "\n";
    ++count;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "RUSSIAN");
    for (int i = 0; i < 15; i++) {
        counting_function();
    }
}
