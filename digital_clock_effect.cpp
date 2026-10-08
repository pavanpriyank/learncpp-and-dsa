#include <iostream>                                          // ask and understand logic behind this code 
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    while (true) {
        // Get current system time
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Clear screen (works in most terminals)
        system("cls"); // use "clear" if on Linux/Mac

        // Print time in HH:MM:SS format
        cout << "==========================" << endl;
        cout << "   DIGITAL CLOCK DISPLAY   " << endl;
        cout << "==========================" << endl;
        cout << setfill('0') << setw(2) << ltm->tm_hour << ":"
             << setfill('0') << setw(2) << ltm->tm_min << ":"
             << setfill('0') << setw(2) << ltm->tm_sec << endl;
        cout << "==========================" << endl;

        // Small delay so it updates every second
        _sleep(1000); // Windows
        // sleep(1);   // Linux/Mac
    }
    return 0;
}
