#include <signal.h> // kill
#include <sys/types.h> // kill
#include <unistd.h> // getpid
#include <stdio.h>

// Rename the binary to whatever and launch. To be used as a dummy process,

int main(int argc, char **argv)
{
	kill(getpid(),SIGSTOP); // Pauses the process.
	return 0;
}
