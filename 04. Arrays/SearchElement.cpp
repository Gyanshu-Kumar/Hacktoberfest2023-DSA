#include <iostream>
using namespace std;

int main() {
    int array[] = {3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 4;

    int ans = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            ans = i;
            break;  
        }
    }

    cout << ans << endl;  
    return 0;
}

