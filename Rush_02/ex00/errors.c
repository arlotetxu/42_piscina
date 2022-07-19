int main(int argc, char **argv)
{
	if (argc < 1 || argc > 3  || (argv[1]< '0' && argv[1] > '9') || argv[1] > 2147483647)
	{
		write(1, "Error\n", 6);
		return (1);
	}
}