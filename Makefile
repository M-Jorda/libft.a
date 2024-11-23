# *********************************** NAME *********************************** #

NAME		= libft.a

# ****************************** SHELL COMMAND ******************************* #

RM			= rm
FINDBYNAME	= find -name
PRINT		= echo
WAIT1		= sleep 1
WAIT0.3		= sleep 0.3
ERASE		= printf "\033[2K\r"

# ********************************** FILES *********************************** #

SRCS	= ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c		\
		ft_calloc.c ft_split.c ft_strdup.c ft_strjoin.c		\
		ft_strmapi.c ft_strtrim.c ft_substr.c				\
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
		ft_putstr_fd.c ft_isalnum.c ft_isalpha.c			\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_bzero.c	\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_striteri.c	\
		ft_strlcat.c ft_strlcpy.c ft_memchr.c ft_memcmp.c	\
		ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c	\
		ft_strrchr.c ft_strcpy.c ft_strcat.c ft_mallocfailed.c
# .ft_strcmp.c .ft_writefile.c #

OBJS	= $(SRCS:.c=.o)

SRC_BNS	= ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c		\
		ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c		\
		ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c
		

OBJ_BNS	= $(SRC_BNS:.c=.o)

# ************************************ ALL *********************************** #

all:	$(NAME)

$(NAME):	$(OBJS)
			@ar rcs $@ $(OBJS)
			@$(PRINT) -n "$(Y)Creating library static $@ from objects ";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT1);$(ERASE)
			@$(PRINT) "$(G)Library $@ successfully created$(O)"
			@$(PRINT) "*********************************************************"
			@$(PRINT) "*$(Y)   _       _  _       __     _        ___     ___      $(O)*"
			@$(PRINT) "*$(Y)  | |     (_)| |     / _|  _| |_     /   |   /   |     $(O)*"
			@$(PRINT) "*$(Y)  | |      _ | |__  | |_  |_   _|   |_/| |  |_/| |     $(O)*"
			@$(PRINT) "*$(Y)  | |     | ||    \ |  _|   | |        | |     | |     $(O)*"
			@$(PRINT) "*$(Y)  | |____ | || |>  || |     | |        | |  _  | |     $(O)*"
			@$(PRINT) "*$(Y)  |______||_||____/ |_|     |_|        |_| (_) |_|     $(O)*"
			@$(PRINT) "*		                                        $(O)*"
			@$(PRINT) "*$(V)     Made by : jjorda                                  $(O)*"
			@$(PRINT) "*$(V)     Created : 10/09/2024                              $(O)*"
			@$(PRINT) "*$(V)     Retried : 29/09/2024                              $(O)*"
			@$(PRINT) "*$(V)     Finisfed : 27/09/2024                             $(O)*"
			@$(PRINT) "*********************************************************"

# ********************************** BONUS *********************************** #

bonus:	$(OBJ) $(OBJ_BNS)
			@ar rcs $(NAME) $(OBJ_BNS)
			@$(PRINT) -n "Creating bonus library static $@ from objects ";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT0.3)
			@$(PRINT) -n ".";$(WAIT1);$(ERASE)
			@$(PRINT) "$(G)Bonus library $@ successfully created$(O)"
			@$(PRINT) "*********************************************************"
			@$(PRINT) "*$(Y)   _                                 ___     ___       $(O)*"
			@$(PRINT) "*$(Y)  | |                               /   |   /   |      $(O)*"
			@$(PRINT) "*$(Y)  | |__    __   _   _  _   _  __   |_/| |  |_/| |      $(O)*"
			@$(PRINT) "*$(Y)  |    \  /  \ | \ | || | | |/ _|     | |     | |      $(O)*"
			@$(PRINT) "*$(Y)  | |>  || <> ||  \| || |_| ||_ |     | |  _  | |      $(O)*"
			@$(PRINT) "*$(Y)  |____/  \__/ |_|\__||_____||__/     |_| (_) |_|      $(O)*"
			@$(PRINT) "*		                                        $(O)*"
			@$(PRINT) "*$(V)     Made by : jjorda                                  $(O)*"
			@$(PRINT) "*$(V)     Created : 10/09/2024                              $(O)*"
			@$(PRINT) "*$(V)     Retried : 29/09/2024                              $(O)*"
			@$(PRINT) "*$(V)     Finisfed : 27/09/2024                             $(O)*"
			@$(PRINT) "*********************************************************"

%.o: %.c
		@cc -Wall -Wextra -Werror -c $< -o $@

# ********************************** CLEAN *********************************** #

clean:
		@$(PRINT) -n "$(R)Cleaning objects files ";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT1);$(ERASE)
		@$(RM) -f $(OBJS) $(OBJ_BNS)
		@$(PRINT) "$(G)object files removed"

# ********************************** FCLEAN ********************************** #

fclean:	clean 
		@$(PRINT) -n "$(R)Cleaning library ";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT0.3)
		@$(PRINT) -n ".";$(WAIT1);$(ERASE)
		@$(RM) -f $(NAME)
		@$(PRINT) "$(G)Library removed"

# ************************************ RE ************************************ #

re:	fclean all

# ********************************** PHONY *********************************** #

.PHONY:	all bonus clean fclean re

# *********************************** COLOR ********************************** #

# BLACK
O	= \033[0m

#RED
R	= \033[0;31m
#GREEN
G	= \033[0;32m
#YELLOW
Y	= \033[0;33m
#VIOLET
V	= \033[0;34m