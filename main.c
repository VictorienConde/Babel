int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    if (strcmp(av[1], "admin") == 0)
    {
        system("/bin/sh");
    }
    else
    {
        puts("Invalid Password");
    }
    return 0;
}