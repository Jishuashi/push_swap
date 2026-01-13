NAME = push_swap

LIBFT = libft

MAIN = push_swap.c

SRCS_PS = check_args.c create_tab_idx.c get_args_array.c

OBJ_PS = $(SRCS_PS:%.c=%.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME): $(OBJ_PS) 
	$(MAKE) -C $(LIBFT) all
	cp libft/libft.a $(NAME).a
	ar rcs $(NAME).a $(OBJ_PS)
	cc $(CFLAGS) $(MAIN) $(NAME).a -o $(NAME)

clean:  
	rm -f $(OBJ_PS)
	$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT) fclean

re: fclean clean all 
	$(MAKE) -C $(LIBFT) re

.PHONY: all clean fclean re