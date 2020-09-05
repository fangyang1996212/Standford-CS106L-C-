int main(int argc, char* argv[])
{
	char buf[1024];
	int n = 0;

	int fd1 = open(argv[1], O_RDONLY);
  
         // O_TRUNC: 覆盖有内容的文件  0664:permission
        // O_CREAT：如果文件不存在，则创造出一个新的
	int fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	while((n=read(fd1, buf, 1024)) != 0) // 由于可能一次性读不完，所以要用循环
	{
		write(fd2, buf, n);
	}

	close(fd1);
	close(fd2);

	return 0;
}
