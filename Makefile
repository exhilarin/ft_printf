NAME= libftprintf.a

SRCS= 	ft_put_c.c\
		ft_put_s.c\
		ft_put_d_i.c\
		ft_put_p.c\
		ft_put_u.c\
		ft_put_x.c\
		ft_check_type.c\
		ft_base.c\
		ft_printf.c

CFLAGS = -Wall -Wextra -Werror
CC = cc
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean