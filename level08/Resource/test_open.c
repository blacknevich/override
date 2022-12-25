#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(void) {
	//int fd = open("./test.txt", O_CREAT|O_WRONLY|O_TRUNC);
	//close(fd);
	int fd = open("./test.txt", O_CREAT);
	close(fd);
	fd = open("./test.txt",O_WRONLY|O_NOFOLLOW|O_SYNC|O_APPEND|O_NONBLOCK);
	close(fd);
	fd = open("./test.txt",O_NOFOLLOW_ANY);
	close(fd);
	fd = open("./test.txt",O_CLOEXEC);
	close(fd);
	fd = open("./test.txt",O_EXLOCK);
	close(fd);
	fd = open("./test.txt",O_SHLOCK);
	close(fd);
	fd = open("./test.txt",O_SYMLINK);
	close(fd);
	fd = open("./test.txt",O_EVTONLY);
	close(fd);
	fd = open("./test.txt",O_WRONLY);
	close(fd);
	fd = open("./test.txt",O_RDONLY);
	close(fd);
	fd = open("./test.txt",O_RDWR);
	close(fd);
	fd = open("./test.txt",O_RDWR|O_WRONLY);
	close(fd);
	fd = open("./test.txt",O_TRUNC);
	close(fd);
	fd = open("./test.txt",O_EXCL);
	close(fd);
	fd = open("./test.txt",O_NOCTTY);
	close(fd);
	fd = open("./test.txt",O_APPEND);
	close(fd);
	fd = open("./test.txt",O_NONBLOCK);
	close(fd);
	fd = open("./test.txt",O_NDELAY);
	close(fd);
	fd = open("./test.txt",O_SYNC);
	close(fd);
	fd = open("./test.txt",O_NOFOLLOW);
	close(fd);
	fd = open("./test.txt",O_DIRECTORY);
	close(fd);
	//fd = open("./test.txt",O_LARGEFILE);
	//close(fd);
	/*
	 * int fd = open("./test.txt", O_CREAT); 512
   0x0000000100003d60 <+8>:	mov    $0x200,%esi
12		fd = open("./test.txt",O_WRONLY|O_NOFOLLOW|O_SYNC|O_APPEND|O_NONBLOCK);
   0x0000000100003d83 <+43>:	mov    $0x18d,%esi
14		fd = open("./test.txt",O_WRONLY); - 1 - 00000001 - yes
   0x0000000100003da6 <+78>:	mov    $0x1,%esi
16		fd = open("./test.txt",O_RDONLY); -0
   0x0000000100003dc9 <+113>:	mov    $0x0,%esi
18		fd = open("./test.txt",O_RDWR); - 2 0 00000010
   0x0000000100003dec <+148>:	mov    $0x2,%esi
20		fd = open("./test.txt",O_RDWR|O_WRONLY);
   0x0000000100003e0f <+183>:	mov    $0x3,%esi
22		fd = open("./test.txt",O_TRUNC); - 1024
   0x0000000100003e32 <+218>:	mov    $0x400,%esi
24		fd = open("./test.txt",O_EXCL); - 2048
   0x0000000100003e55 <+253>:	mov    $0x800,%esi
26		fd = open("./test.txt",O_NOCTTY);
   0x0000000100003e78 <+288>:	mov    $0x20000,%esi
28		fd = open("./test.txt",O_APPEND); - 8 - 1000
   0x0000000100003e9b <+323>:	mov    $0x8,%esi
30		fd = open("./test.txt",O_NONBLOCK); 4 - 100
   0x0000000100003ebe <+358>:	mov    $0x4,%esi
32		fd = open("./test.txt",O_NDELAY);
   0x0000000100003ee1 <+393>:	mov    $0x4,%esi
34		fd = open("./test.txt",O_SYNC); - 128 - 10000000 - yes
   0x0000000100003f04 <+428>:	mov    $0x80,%esi
36		fd = open("./test.txt",O_NOFOLLOW);
   0x0000000100003f27 <+463>:	mov    $0x100,%esi - 256 - 100000000
38		fd = open("./test.txt",O_DIRECTORY);
   0x0000000100003f4a <+498>:	mov    $0x100000,%esi
   		fd = open("./test.txt",O_CLOEXEC);
   0x0000000100003cf7 <+78>:	mov    $0x1000000,%esi
16		fd = open("./test.txt",O_EXLOCK);
   0x0000000100003d1a <+113>:	mov    $0x20,%esi - 32
18		fd = open("./test.txt",O_SHLOCK); - 16
   0x0000000100003d3d <+148>:	mov    $0x10,%esi
20		fd = open("./test.txt",O_SYMLINK);
   0x0000000100003d60 <+183>:	mov    $0x200000,%esi
22		fd = open("./test.txt",O_EVTONLY);
   0x0000000100003d83 <+218>:	mov    $0x8000,%esi
   		fd = open("./test.txt",O_NOFOLLOW_ANY);
   0x0000000100003cd4 <+78>:	mov    $0x20000000,%esi
   */
}
