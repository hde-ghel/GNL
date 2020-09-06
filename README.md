# get_next_line
  
Create a function which returns the next line from a file descriptor each time the function is called, without losing the reading thread.  

get_next_line is now part of my personal C library. See my libft repo.
  
I achieved bonus score for using just one static variable, and handling multiple file descriptors without losing thread of reading on any.  
  
GNL is very helpful for parsing exercises, in examples where there is one piece of data per line.  
With a simple program, get_next_line can behave like `cat`.

For example: The following main:
```c
#include "get_next_line.h"
#include <fcntl.h>

int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	char		*line;

	if (argc == 2)
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while ((get_next_line(fd, &line)) == 1)
		{
			ft_putstr(line);
			ft_putchar('\n');
		}
		close(fd);
	}
	return (0);
}
```
The following would result from the above simple main:
```console
$> ./test_gnl test_file
Pink
Orange
Love
Hello world
```
Which would be the same as:
```console
$> cat test_file
Pink
Orange
Love
Hello world
```
The function must conform to 42's norm.  
The function cannot leak. All errors must be handled carefully. In no way can the function quit in an unexpected manner (Segmentation fault, bus error, double free, etc).  
Allowed functions are `read`, `malloc` and `free`. Everything else is forbidden.
