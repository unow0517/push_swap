CC := cc
AR := ar
#https://stackoverflow.com/questions/448910/what-is-the-difference-between-the-gnu-makefile-variable-assignments-a
CFLAGS := -Wall -Werror -Wextra

CFILES = ft_atoi.c ft_isdigit.c ft_putendl_fd.c ft_split.c ft_strdup.c ft_strlen.c ft_substr.c

OFILES = $(CFILES:.c=.o)

NAME = Libft.a

RM = rm -rf
#target: prerequisites
#	command
#	command...
#prerequisites(=dependencies) are file names which should exists to run target 

#[make] will run [all] automatically since it is the first target

all: $(NAME)

#make libft.a will make an archive(library) with OFILES
$(NAME): $(OFILES)
	@$(AR) rcs $(NAME) $(OFILES)

# %.o: %c 
# 	$(CC) -c $(CFLAGS) -o $(OFILES) $(CFILES)

# $@ = target name
# $< = The name of the first prerequisite
# -c = Prevents the preprocessor from removing comments, except those on the preprocessing directive lines.
# -o = make obj file
# #^ = output all prerequisities

#[make clean] will remove all OBJ files
clean:
	@$(RM) -f $(OFILES)

#it first run [make clean], then remove [libft.a]
fclean: clean
	@$(RM) -f $(NAME)

#rebuild, first it delete all obj files and library with [fclean] and build 
re: fclean all

#libft.a should be generated at the end 

bonus: $(BOFILES)
	ar rcs $(NAME) $(BOFILES)