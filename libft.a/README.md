# Libft.a 

# About:

 - In this project we do make our own C library which we'll use in some future C projects.

# What will you find here exactly?
	

 - This project consist of 43 functions and their header file and finally the Makefile.

	
# What are these functions and what's their use?
	The functions are grouped in 3 seperate parts (as in the project's PDF)
## ***Part 1:  Libc functions***.
 - [ft_isalpha](https://github.com/AmineS530/Libft.a/blob/main/ft_isalpha.c)
	> Checks whether the character or int passed as parameter is alphabetical.
 - [ft_isdigit](https://github.com/AmineS530/Libft.a/blob/main/ft_isdigit.c)
 	> Checks whether the character or int passed as parameter is a decimal degit.
 - [ft_isalnum](https://github.com/AmineS530/Libft.a/blob/main/ft_isalnum.c)
 	> Checks whether the character or int passed as parameter is alphanumeric.
 - [ft_isascii](https://github.com/AmineS530/Libft.a/blob/main/ft_isascii.c)
 	> Checks whether the character or int passed as parameter belongs to the ascii table.
 - [ft_isprint](https://github.com/AmineS530/Libft.a/blob/main/ft_isprint.c)
 	> Checks whether the character or int passed as parameter is printable.
 - [ft_strlen](https://github.com/AmineS530/Libft.a/blob/main/ft_strlen.c)
 	> Calculates the length of a given string.
 - [ft_memset](https://github.com/AmineS530/Libft.a/blob/main/ft_memset.c)  
 	> Fills string with the unsigned char c by writing byte by byte for len characters.
 - [ft_bzero](https://github.com/AmineS530/Libft.a/blob/main/ft_bzero.c)
 	> In a way similar to ft_memset but instead of filling the string with c, if fill it with '\0'. 
 - [ft_memcpy](https://github.com/AmineS530/Libft.a/blob/main/ft_memcpy.c) 
 	> Copies n bytes from source to destination.
 - [ft_memmove](https://github.com/AmineS530/Libft.a/blob/main/ft_memmove.c) 
	 > Similar to memcpy but it has overlap protection (click [here](https://cs50.stackexchange.com/questions/14615/memory-overlap-in-c) to know more about it)
 - [ft_strlcpy](https://github.com/AmineS530/Libft.a/blob/main/ft_strlcpy.c) 
	 > Copies from source to destination while returning source length.
 - [ft_strlcat](https://github.com/AmineS530/Libft.a/blob/main/ft_strlcat.c)     
	 > Concatenates n characters from source after destinations and returns source length + dstsize or source length + dest length, more about it [here](https://stackoverflow.com/questions/33154740/strlcat-is-dst-always-nul-terminated-what-are-size-and-the-returned-value).
 - [ft_toupper](https://github.com/AmineS530/Libft.a/blob/main/ft_toupper.c)
	 > Converts the character to uppercase.
 - [ft_tolower](https://github.com/AmineS530/Libft.a/blob/main/ft_tolower.c)
	 > Converts the character to lowercase.
 - [ft_strchr](https://github.com/AmineS530/Libft.a/blob/main/ft_strchr.c)
	 > Locates the first occurrence of a character in a string and returns it address.
 - [ft_strrchr](https://github.com/AmineS530/Libft.a/blob/main/ft_strrchr.c)
	 > Locates the last occurrence of a character in a string and returns it address.
 - [ft_strncmp](https://github.com/AmineS530/Libft.a/blob/main/ft_strncmp.c)
	 > Compares 2 strings within n characters.
 - [ft_memchr](https://github.com/AmineS530/Libft.a/blob/main/ft_memchr.c)
	 > Locates the first occurrence of a int (converted to unsigned char) in memory and returns a pointer to its address if it exist within n bytes.
 - [ft_memcmp](https://github.com/AmineS530/Libft.a/blob/main/ft_memcmp.c)
	 >  Compares byte strings s1 against s2 within n bytes.
 -  [ft_strnstr](https://github.com/AmineS530/Libft.a/blob/main/ft_strnstr.c)
	  >  Locates the first occurrence of the string needle within len characters from the string haystack. 
 - [ft_atoi](https://github.com/AmineS530/Libft.a/blob/main/ft_atoi.c)
	 > Converts numbers in a string to an int. 
 - [ft_calloc](https://github.com/AmineS530/Libft.a/blob/main/ft_calloc.c)
	> Allocates memory for **count** object that are **size** bytes of memory (count * size) with bytes of value zero , and returns a pointer to the allocated memory.
 -  [ft_strdup](https://github.com/AmineS530/Libft.a/blob/main/ft_strdup.c) 
	>  Duplicates a string s1 and allocates sufficient memory for it.
## ***Part 2:  Additional functions***.
	the following descriptions are copied from the subject's PDF.
 - [ft_substr](https://github.com/AmineS530/Libft.a/blob/main/ft_substr.c)
	> Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
 -  [ft_strjoin](https://github.com/AmineS530/Libft.a/blob/main/ft_strjoin.c)
	> Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’ 
 - [ft_strtrim](https://github.com/AmineS530/Libft.a/blob/main/ft_strtrim.c)
	> Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 - [ft_split](https://github.com/AmineS530/Libft.a/blob/main/ft_split.c)
	> Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must end with a NULL pointer.
 - [ft_itoa](https://github.com/AmineS530/Libft.a/blob/main/ft_itoa.c)
	> Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
Negative numbers must be handled.
 - [ft_strmapi](https://github.com/AmineS530/Libft.a/blob/main/ft_strmapi.c)
	> Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
 - [ft_striteri](https://github.com/AmineS530/Libft.a/blob/main/ft_striteri.c)
	>Applies the function ’f’ on each character ofthe string passed as argument, passing its index as first argument. 
	Each character is passed by address to ’f’ to be modified if necessary.
 - [ft_putchar_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putchar_fd.c)
	> Outputs the character ’c’ to the given file descriptor.
 - [ft_putstr_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putstr_fd.c)
	> Outputs the string ’s’ to the given file descriptor.
 - [ft_putendl_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putendl_fd.)
	> Outputs the string ’s’ to the given file descriptor followed by a newline.
 - [ft_putnbr_fd](https://github.com/AmineS530/Libft.a/blob/main/ft_putnbr_fd.)
	> Outputs the integer ’n’ to the given file descriptor.
## ***Bonus Part***.
	the following descriptions are copied from the subject's PDF.
 - [ft_lstnew](https://github.com/AmineS530/Libft.a/blob/main/ft_lstnew_bonus.c) 
	> Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value of the parameter ’content’.  The variable ’next’ is initialized to NULL.
 - [ft_lstadd_front](https://github.com/AmineS530/Libft.a/blob/main/ft_lstadd_front_bonus.c) 
	> Adds the node ’new’ at the beginning of the list.
 - [ft_lstsize](https://github.com/AmineS530/Libft.a/blob/main/ft_lstsize_bonus.c) 
	> Counts the number of nodes in a list. 
 - [ft_lstlast](https://github.com/AmineS530/Libft.a/blob/main/ft_lstlast_bonus.c) 
	> Returns the last node of the list.
 - [ft_lstadd_back](https://github.com/AmineS530/Libft.a/blob/main/ft_lstadd_back_bonus.c)
	> Adds the node ’new’ at the end of the list.
 - [ft_lstdelone](https://github.com/AmineS530/Libft.a/blob/main/ft_lstdelone_bonus.c) 
	> Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.  The memory of ’next’ must not be freed.
 - [ft_lstclear](https://github.com/AmineS530/Libft.a/blob/main/ft_lstclear_bonus.c) 
	>Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
 - [ft_lstiter](https://github.com/AmineS530/Libft.a/blob/main/ft_lstiter_bonus.c) 
	> Iterates the list ’lst’ and applies the function
’f’ on the content of each node.
 - [ft_lstmap](https://github.com/AmineS530/Libft.a/blob/main/ft_lstmap_bonus.c)
	> Iterates the list ’lst’ and applies the function ’f’ on the content of each node.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of a node if needed.


# Libft Testers

 - **[Tripouille's tester](https://github.com/Tripouille/libftTester)**.
 - **[Francinette](https://github.com/xicodomingues/francinette)**.
 - **[Libft unit test](https://github.com/alelievr/libft-unit-test)**.
 - **[Libft War-machine](https://github.com/0x050f/libft-war-machine)**.
 
# Other:
 - Some resources i needed through the project:
 
	[Makefile GNU MAN](https://www.gnu.org/software/make/manual/make.html#Simple-Makefile)
	
	[MacOS MAN](https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/)
	
	https://stackoverflow.com/questions/451375/what-does-it-mean-for-a-char-to-be-signed
	
	https://stackoverflow.com/questions/9834067/difference-between-char-and-const-char 
	
	[Linked lists](https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)

- Inconsistent code optimizations:

 		you may have noticed that for example use unnecessary if statement or perhaps a while loop,
		(I noticed some of these mistakes after i finished the project,  well the reason behind it is simply i didn't know better at the time 
		i wrote the code, But hey, its getting the job done 

 - Weird var names:

		If you gone through some of my code you'll notice weird variable naming such as ("uwu","owo","awa"...),
		the reason behind that , is id like to have fun making my code, so I use these names so when I code I don't feel tired/bored easily :),
		(To conclude. It's a something that increases my productivity).



