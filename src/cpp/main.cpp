#include <windows.h>
#include <conio.h>
using namespace std;

double time_list[5] = {100, 200, 300, 400, 500};
bool isEnabled = false;

int main() {
    
    while(true) {
        int RandIndex = rand() % 5; //generates a random number between 0 and 4
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
