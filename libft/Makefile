NAME = libft.a 

CC = cc

CFLAGS = -Wall -Wextra -Werror 

OBJS = $(SRCS_NAME:.c=.o)

SRCS_NAME = ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_calloc.c\
	ft_strjoin.c\
	ft_strdup.c\
	ft_substr.c\
	ft_striteri.c\
	ft_split.c\
	ft_strtrim.c\
	ft_puthex.c\
	ft_putcap_hex.c\
	ft_printf_char.c\
	ft_printf_string.c\
	ft_printf2.c\
	ft_printf.c\
	ft_putnbr.c\
	ft_pnthexa.c\
	ft_printf_nbr.c\
	ft_putnbrbase.c\
	get_next_line.c\
	get_next_line_utils.c

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all