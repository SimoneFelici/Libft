# Libft
First 42 Project about creating a library.

## MANDATORY
> The mandatory functions in libft include both functions from the standard C library and other functions that are useful for character, string, and memory manipulation. These **34 mandatory functions** are essential to achieving a **grade of 100**.

#### Check and manipulate characters:
| Function | Description |
| :- | :- |
| `ft_isalpha` | Alphabetic character test. |
| `ft_isdigit` | Decimal-digit character test. |
| `ft_isalnum` | Alphanumeric character test. |
| `ft_isascii` | Test for ASCII character. |
| `ft_toupper` | Lower case to upper case letter conversion. |
| `ft_tolower` | Upper case to lower case letter conversion. |

#### Manipulate strings:
| Function | Description |
| :- | :- |
| `ft_strlen`   | Find the length of the string. |
| `ft_strlcpy`  | Size-bounded string copying. |
| `ft_strlcat`  | Size-bounded string concatenation. |
| `ft_strchr`   | Locate the character in the string (first occurrence). |
| `ft_strrchr`  | Locate the character in the string (last occurrence). |
| `ft_strncmp`  | Compare strings (size-bounded). |
| `ft_strnstr`  | Locate a substring in a string (size-bounded) |
| `ft_substr`   | Extract substring from a string. |
| `ft_strjoin`  | Concatenate two strings into a new string (with malloc). |
| `ft_strtrim`  | Trim the beginning and end of the string with the specified characters. |
| `ft_split`    | Split string, with specified character as delimiter, into an array of strings. |
| `ft_strmapi`  | Create a new string by modifying the string with a specified function. |
| `ft_striteri` | Iterates through a string, enabling character and index manipulation. |

#### Manipulate memory:
| Function | Description |
| :- | :- |
| `ft_calloc`  | Memory allocation. |
| `ft_memset`  | Write a byte to a byte string. |
| `ft_bzero`   | Write zeroes to a byte string. |
| `ft_memcpy`  | Copy memory area. |
| `ft_memmove` | Copy byte string. |
| `ft_memchr`  | Locate byte in byte string. |
| `ft_memcmp`  | Compare byte string. |
| `ft_strdup`  | Save a copy of a string (with malloc). |

#### Manipulate numbers:
| Function | Description |
| :- | :- |
| `ft_atoi` | Convert the ASCII string to an integer. |
| `ft_itoa` | Convert integer to ASCII string. |

#### Write to a file descriptor:
| Function | Description |
| :- | :- |
| `ft_putchar_fd` | Output a character to the given file. |
| `ft_putstr_fd`  | Output string to the given file. |
| `ft_putendl_fd` | Output string to given file with newline. |
| `ft_putnbr_fd`  | Output integer to the given file. |

## BONUS
> The bonus functions in libft are focused on list manipulation and are worth an additional 25 towards the final grade. To achieve a **grade of 125**, **all 9 bonus functions and 34 mandatory functions** must be completed accurately.

| Function | Description |
| :- | :- |
| `ft_lstnew`       | Create new list. |
| `ft_lstadd_front` | Add a new element at the beginning of the list. |
| `ft_lstadd_back`  | Add a new element at the end of the list. |
| `ft_lstsize`      | Count elements of a list. |
| `ft_lstlast`      | Find the last element of the list. |
| `ft_lstdelone`    | Delete element from the list. |
| `ft_lstclear`     | Delete the sequence of elements of the list from a starting point. |
| `ft_lstiter`      | Apply function to the content of all list elements. |
| `ft_lstmap`       | Apply function to the content of all list elements into a new list. |

