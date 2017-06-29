#include <cstdlib>
#include <iostream>

using namespace std;

bool accept() {

    for (int i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;
    if (answer == 'y') {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char** argv) {
    accept();
    return 0;
}

