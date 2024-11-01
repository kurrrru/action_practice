#include <unistd.h>

int main()
{
	write(STDOUT_FILENO, "d", 1);
}
