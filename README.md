# 42-print_memory
print_memory @ 42 - Displays the memory.

Assignment name  : print_memory  
Expected files   : print_memory.c  
Allowed functions: write  

Write a function that takes (const void *addr, size_t size), and displays the  
memory as in the example.  

Your function must be declared as follows:  

void	print_memory(const void *addr, size_t size);  
 
$> gcc -Wall -Wall -Werror main.c print_memory.c && ./a.out | cat -e  
0000 0000 1700 0000 9600 0000 ff00 0000 ................$  
0c00 0000 1000 0000 1500 0000 2a00 0000 ............*...$  
0000 0000 0000 0000                     ........$  
