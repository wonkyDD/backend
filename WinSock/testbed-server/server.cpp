#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")

// https://stackoverflow.com/questions/39931347/simple-http-get-with-winsock
// https://learn.microsoft.com/en-us/windows/win32/winsock/windows-sockets-start-page-2
int main()
{
	// https://learn.microsoft.com/en-us/windows/win32/winsock/windows-sockets-start-page-2
	printf("Hello Server!\n");
	return 0;
}
