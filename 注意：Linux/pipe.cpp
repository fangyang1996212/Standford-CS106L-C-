#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<pthread.h>

/* 简单封装一个报错函数 */
void sys_err(const char *str)
{
	perror(str);
	exit(1);
}

int main(int argc, char* argv[])
{
	int ret;
	pid_t pid;
	int fd[2];      // fd[0]:读端    fd[1]:写端。
	char const *str = "hello pipe\n"; // 这里要加 const 不然会出现警告。
	char buf[1024];

	ret = pipe(fd);
	if(ret == -1)
		sys_err("pipe error");

	pid = fork();

	/* 下面安排父进程写，子进程读 */
	if(pid <0 )
	{
		sys_err("fork error");
	}else if(pid > 0)
	{
		close(fd[0]);
		write(fd[1], str, strlen(str));
		sleep(1);

		close(fd[1]);
	}else if(pid == 0)
	{
		close(fd[1]);
		ret = read(fd[0], buf, sizeof(buf));  // 由于内容少，就没用循环来读数据。
		write(STDOUT_FILENO, buf, ret);       // STDOUT_FILENO 是标志输出描述符。

		close(fd[0]);
	}

	return 0;
}
