#include <cstdlib>
#include <iostream>

using namespace std;


bool accept() {
    cout << "Do you want to preceed (y or n)?\n";
    
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

