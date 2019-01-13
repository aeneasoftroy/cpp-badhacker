#include <windows.h>
#include <winable.h>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    BlockInput(true);
    string str;
    str = "WiFi HackTool\n\n\nLoading modules ...\nDONE!\n\nLoading hacking framework ...\nDONE!\n\nScanning for WiFi hardware ...\nDONE!\n\n\nStarting WiFi Hacking tool for lamers now ...\nNothing to load!\n\n\nNOOB DETECTED: Formatting hard drive!\n.\n.\n.\n.\n.\n.\n.\nThis time you're lucky, this is NOT a hacktool or trojan/virus/destructive code.\n\nBe warned, NEVER open unknown EXE files!!!\n\n\nEHVSN";

for (int i = 0; i < str.length(); i++)
{
    char c = str[i];
    //OR print per line by adding a \n like this: printf("%c\n", c);
    printf("%c", c);
	Sleep(50);
}
    Sleep(5000); //sleep 1000 = 1 sec
    return 0;
}
