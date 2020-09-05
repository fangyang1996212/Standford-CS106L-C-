#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>  
#include<pthread.h>

int main(int argc, char* argv[])
{
	printf("------before fork-1-\n");
	printf("------before fork-2-\n");

	pid_t pid = fork();

	if(pid < 0)
	{
		perror("fork error");
		exit(1);
	}else if(pid == 0)
	{
		printf("---------Child process is created!\n");
	}else if(pid > 0)
	{
		printf("------Parent process:my child is:%d\n", pid);
	}

	printf("======================end of the file\n");   // 会看到这一句会打印两次是因为父和子进程都会执行 fork 后面的内容。

	return 0;

}
