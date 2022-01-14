src/put/ft_putendl_fd.c:20:11: error: comparison between pointer and integer ('char' and 'void *')
      [-Werror,-Wpointer-integer-compare]
        if (s[i] != NULL)
            ~~~~ ^  ~~~~
1 error generated.
src/str/ft_strnstr.c:30:14: error: cast to 'char *' from smaller integer type 'char' [-Werror,-Wint-to-pointer-cast]
                                        return ((char *)big[i]);
                                                ^
1 error generated.
src/str/ft_strtrim.c:72:2: error: implicitly declaring library function 'printf' with type 'int (const char *, ...)'
      [-Werror,-Wimplicit-function-declaration]
        printf("start: %d\n", start);
        ^
src/str/ft_strtrim.c:72:2: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
1 error generated.
src/lst/ft_lstadd_back.c:43:32: error: incompatible pointer types passing 't_list ***' (aka 'struct s_list ***') to
      parameter of type 't_list *' (aka 'struct s_list *') [-Werror,-Wincompatible-pointer-types]
        last_node = ft_lstlast(&lst);
                               ^~~~
src/lst/ft_lstadd_back.c:22:28: note: passing argument to parameter 'lst' here
t_list *ft_lstlast(t_list *lst)
                           ^
1 error generated.
src/lst/ft_lstadd_front.c:26:19: error: incompatible pointer types assigning to 'struct s_list *' from 't_list ***'
      (aka 'struct s_list ***') [-Werror,-Wincompatible-pointer-types]
        new->next = &lst;
                  ^ ~~~~
1 error generated.
src/lst/ft_lstmap.c:66:32: error: incompatible pointer types passing 't_list ***' (aka 'struct s_list ***') to
      parameter of type 't_list *' (aka 'struct s_list *') [-Werror,-Wincompatible-pointer-types]
        last_node = ft_lstlast(&lst);
                               ^~~~
src/lst/ft_lstmap.c:45:28: note: passing argument to parameter 'lst' here
t_list *ft_lstlast(t_list *lst)
                           ^
src/lst/ft_lstmap.c:99:28: error: incompatible pointer types passing 't_list *' (aka 'struct s_list *') to parameter
      of type 't_list **' (aka 'struct s_list **'); take the address with & [-Werror,-Wincompatible-pointer-types]
            ft_lstadd_back(new_list, new_node);
                           ^~~~~~~~
                           &
src/lst/ft_lstmap.c:58:30: note: passing argument to parameter 'lst' here
void ft_lstadd_back(t_list **lst, t_list *new)
                             ^
src/lst/ft_lstmap.c:102:17: error: incompatible pointer types passing 't_list *' (aka 'struct s_list *') to
      parameter of type 't_list **' (aka 'struct s_list **'); take the address with &
      [-Werror,-Wincompatible-pointer-types]
    ft_lstclear(lst, del);
                ^~~
                &
src/lst/ft_lstmap.c:30:27: note: passing argument to parameter 'lst' here
void ft_lstclear(t_list **lst, void (*del)(void*))
                          ^
3 errors generated.
src/lst/ft_lstsize.c:31:9: error: variable 'size' is uninitialized when used here [-Werror,-Wuninitialized]
        size++;
        ^~~~
src/lst/ft_lstsize.c:24:13: note: initialize the variable 'size' to silence this warning
    int size;
            ^
             = 0
