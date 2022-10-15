#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;

double time_list[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
bool isEnabled = false;

// keybd_event(0x14, 0, KEYEVENTF_EXTENDEDKEY, 0);
// keybd_event(0x14, 0, KEYEVENTF_KEYUP, 0);

int main() {
    
    while(true) {
        int RandIndex = rand() % 4; //generates a random number between 0 and 3
        if (isEnabled == false) {
            keybd_event(0x14, 0, KEYEVENTF_EXTENDEDKEY, 0);
            isEnabled = true;
            Sleep(time_list[RandIndex]);
        }
        else {
            keybd_event(0x14, 0, KEYEVENTF_KEYUP, 0);
            isEnabled = false;
            Sleep(time_list[RandIndex]);
        }
    }

    return 0;
}