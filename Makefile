CC = cc # Coqpiler flags that moulinette uses/42.

CC_FLAGS = -Wall -Werror -Wextra

NAME = libft.a 

SRC_FILES = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_itoa.c\
			ft_strrchr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\

BONUS = ft_lstadd_back_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstmap_bonus.c\
		ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\

BONUS_OBJS		= $(BONUS:.c=.o)

OBJ_FILES = $(SRC_FILES:%.c=%.o)  # We convert our SOURCE files to OBJECT files.

# Rule to make sure to compile each .c file into a .o file.
%.o: %.c #ADD $(DEPENDENCIES) if we use HEADER files.This function is used so the "Make" only recompiles the files if something has been modified or updated.
	$(CC) $(CC_FLAGS) -c $< -o $@ 

# Rule to create the executable from object files.
$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)

# Default target: this is what runs when you just type `make`.
all: $(NAME)

#$< Is the source file representative and $@ is the object file representative.
# Clean up: remove object files and the executable file/program.
clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJS)

fclean: clean #This command calls "clean" function and also makes sure the program file is also removed/cleaned.
	rm -f $(NAME)

re: fclean all #This command calls "fclean" to clean all files and then "all" to recompile everything again.

bonus: $(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)

# Phony targets: these don't correspond to actual files.
.PHONY: all clean fclean re
