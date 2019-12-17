# Get Next Line

Más tarde añadido a mi librería de C 'Libft', el objetivo de esta 'ft_get_next_line' es poder leer una línea que termina con un carácter de nueva llínea dentro de un descriptor de archivo.

Si se vuelve a llamar dentro del mismo archivo, almacenará la línea anterior en un caché, comenzará a leer desde allí y tomará la siguiente línea.

Esta función devuelve un (-1) si se produce un error.
Devuelve un (0) si se alcanza el EOF (Fin de archivo). 
Devuelve un (1) si se ha encontrado una nueva línea.
