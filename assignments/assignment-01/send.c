#include <sys/types.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#define MSGSIZ 150


typedef struct msgbuf
{
	long mtype;
	char mtext[MSGSIZ];
} 

message_buf;

int main()
{
	int msgid;
	int msgflg = IPC_CREAT | 0666;
	key_t msgkey;
	message_buf sbuf;
	size_t buf_length;
	msgkey = 1212;
	msgid = msgget(msgkey, msgflg );
	sbuf.mtype = 1;
	strcpy(sbuf.mtext, "This msg is from other process:\n");
	buf_length = strlen(sbuf.mtext) + 1 ;
	msgsnd(msgid, &sbuf, buf_length, IPC_NOWAIT);
	printf("Message Sended\n");
	return 0;
}