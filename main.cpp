#include <iostream>
#include <windows.h>
#include <string>


int main() {

    std::string processName;
    std::cout << "Enter process name: ";

    getline( std::cin, processName );
    HWND processWindow = FindWindow(
            NULL,
            "F:\\Path\\To\\Process.exe");
    DWORD pid = 0;
    GetWindowThreadProcessId(processWindow, &pid);

    std::cout << "Process id: " << pid << std::endl;

    std::cin.get();
    return 0;
}
