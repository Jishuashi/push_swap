NAME = push_swap

LIBFT = libft

MAIN = push_swap.c

SRCS_PS = check_args.c		get_args_array.c	ft_atoi_long.c	ft_count_nb.c	\
          ft_get_str_nbr.c	swap_stack.c		swap_all.c		down_tab.c		\
		  up_tab.c			push_stack.c		

OBJ_PS = $(SRCS_PS:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror -g

all : $(NAME) 

$(NAME): makelib
	cc $(CFLAGS) $(MAIN) $(NAME).a -o $(NAME)

makelib: $(OBJ_PS) 
	$(MAKE) -C $(LIBFT) all
	cp libft/libft.a $(NAME).a
	ar rcs $(NAME).a $(OBJ_PS)

clean:  
	rm -f $(OBJ_PS)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean

re: fclean clean all 
	$(MAKE) -C $(LIBFT) re

.PHONY: all clean fclean re makelib