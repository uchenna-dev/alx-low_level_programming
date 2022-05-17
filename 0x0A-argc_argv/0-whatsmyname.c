Total 15 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 1 local object.
To https://github.com/uchenna-dev/alx-low_level_programming.git
   2fddf5e..7bbea87  master -> master
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0B-malloc_free$ cd ..
uchenna@uchenna-VirtualBox:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging                    0x06-pointers_arrays_strings  0x09-static_libraries  0x0C-more_malloc_free
0x01-variables_if_else_while  0x04-more_functions_nested_loops  0x07-pointers_arrays_strings  0x0A-argc_argv         README.md
0x02-functions_nested_loops   0x05-pointers_arrays_strings      0x08-recursion                0x0B-malloc_free
uchenna@uchenna-VirtualBox:~/alx-low_level_programming$ cd 0x0A-argc_argv
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0A-argc_argv$ ls
main.h  README.md
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0A-argc_argv$ cat > 0-whatsmyname.c

Total 15 (delta 3), reused 0 (delta 0)
remote: Resolving deltas: 100% (3/3), completed with 1 local object.
To https://github.com/uchenna-dev/alx-low_level_programming.git
   2fddf5e..7bbea87  master -> master
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0B-malloc_free$ cd ..
uchenna@uchenna-VirtualBox:~/alx-low_level_programming$ ls
0x00-hello_world              0x03-debugging                    0x06-pointers_arrays_strings  0x09-static_libraries  0x0C-more_malloc_free
0x01-variables_if_else_while  0x04-more_functions_nested_loops  0x07-pointers_arrays_strings  0x0A-argc_argv         README.md
0x02-functions_nested_loops   0x05-pointers_arrays_strings      0x08-recursion                0x0B-malloc_free
uchenna@uchenna-VirtualBox:~/alx-low_level_programming$ cd 0x0A-argc_argv
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0A-argc_argv$ ls
main.h  README.md
uchenna@uchenna-VirtualBox:~/alx-low_level_programming/0x0A-argc_argv$ cat > 0-whatsmyname.c

#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);

	return (0);
}
