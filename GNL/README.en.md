# Gen Next Line

Later added into the 'Libft' C Library, the objective of this 'ft_get_next_line' is to be able to read a line ending with a newline character within a file descriptor. 

If called within the same file, it will store the previous line in a cache, start reading from there, and grab the line after that.

A (-1) is returned if a error occurs.
A (0) is returned if the EOF (End of File) is reached.
And a (1) is returned if a new line has been found.
