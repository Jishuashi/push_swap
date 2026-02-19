NAME 		= 	push_swap
LIBFT_DIR   = 	libft
LIBFT       = 	$(LIBFT_DIR)/libft.a

CC          = 	cc
CFLAGS      = 	-Wall -Wextra -Werror -g
RM          = 	rm -f

MAIN 		= 	push_swap.c
SRCS 		=   check_args.c		get_args_array.c	ft_atoi_long.c		ft_count_nb.c		\
        		ft_get_str_nbr.c	swap_stack.c		swap_all.c			down_tab.c			\
				up_tab.c			push_stack.c		rotate_stack.c		rrotate_stack.c		\
				rrotate_all.c		rotate_all.c		radix_sort.c		index_tab.c			\
				getlen_stack.c		ft_print_stack.c	little_nb_sort.c	is_sorted.c			\

OBJS        = 	$(SRCS:.c=.o)

CFLAGS 		= 	-Wall -Wextra -Werror -g

GREEN       = 	\033[0;32m
RESET       = 	\033[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) $(MAIN)
	@echo -e "$(GREEN)Compiling $(NAME)...$(RESET)"
	$(CC) $(CFLAGS) $(MAIN) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning objects..."
	$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@echo "Cleaning executable and library..."
	$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re