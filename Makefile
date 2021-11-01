CC = gcc 

CFLAGS = -Wall -Wextra -Werror 

NAME = libft.a

SRC = ft_atoi.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_putchar.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_strcat.c \
		ft_tolower.c \
		ft_strdup.c \
		ft_putstr.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_strstr.c \
		ft_itoa.c \
		ft_strlcpy.c \
		ft_strcpy.c \
		ft_strjoin.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_calloc.c \
		ft_memset.c \
		ft_memccpy.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_substr.c	\
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strnstr.c \
		ft_strmapi.c

BNS = ft_lstadd_back.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstdelone.c \
		ft_lstadd_front.c \
		ft_lstlast.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c  

OBJ = ${SRC:.c=.o}
O_BONUS = ${BNS:.c=.o}

all   : $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean : 
	rm -rf $(OBJ) $(O_BONUS)

fclean: clean
	rm -rf $(NAME)

%.o   : %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

bonus : $(OBJ) $(O_BONUS)
	ar rcs $(NAME) $(OBJ) $(O_BONUS)
	
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BNS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(O_BONUS)

re : fclean all
