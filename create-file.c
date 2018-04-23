#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
int main()
{
	int fd=open("/tmp/foo.txt",O_CREAT | O_WRONLY, 0600);
	if (fd<0){
		printf("There is error code: %d",errno);
		perror("foo");
	}
	write(fd,"My First System Program\n",24);
	close(fd);
}

