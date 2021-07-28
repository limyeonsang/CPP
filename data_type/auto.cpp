#include <iostream>

auto add(int x, int y) {
    return x + double(y);
}

auto add(double x, double y) -> double {
    return x * y;
}

int main() {
    using namespace std;

    auto a = 123;
    auto b = 213.3;
    auto c = 1 + 2.0;

    auto result = add(1.0, 2.0);
    cout << result << " " << typeid(result).name() << endl;

    return 0;
}