NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = ./
LIB_FILES = ft_atoi.c ft_bzero.c ft_strlen.c ft_isalnum.c ft_isalpha.c ft_calloc.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c ft_strrev.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_strtrim.c ft_striteri.c
O_FILES = $(LIB_FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES) $(NAME)

$(O_FILES):
			gcc -c $(LIB_FILES) -I $(HEADERS) $(FLAGS)

$(NAME):
			ar rc $(NAME) $(O_FILES)

clean:
			rm -rf $(O_FILES)

fclean: clean
			rm -rf $(NAME)

re: fclean all