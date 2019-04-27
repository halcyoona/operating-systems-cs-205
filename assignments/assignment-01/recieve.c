#include <sys/types.h>
#include <sys/msg.h>
#include <stdio.h>
#define MSGSIZ 150


typedef struct msgbuf
{
	long mtype;
	char mtext[MSGSIZ];
} 

message_buf;
int main()
{
	int msqid;
	key_t msgkey;
	message_buf rbuf;
	msgkey = 1212;
	msqid = msgget(msgkey, 0666);
	msgrcv(msqid, &rbuf, MSGSIZ, 1, 0);
	printf("%s\n", rbuf.mtext);
	return 0;
}