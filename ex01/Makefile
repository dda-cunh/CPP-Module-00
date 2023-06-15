.SILENT:
NAME		= 	PhoneBook

CC 			= 	c++

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98

RM 			= 	rm -f

SRC			=	PhoneBook.cpp Contact.cpp utils.cpp main.cpp

GREEN		= 	\033[0;32m

RESET		=	\033[0m

$(NAME):		$(SRC)
				$(CC) $(CFLAGS) $(SRC) -o $(NAME)
				make done

all: 			$(NAME)

clean:	
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean	all

done:
				printf "															 	\n"
				printf "$(GREEN)	$(NAME)							 			$(RESET)\n"
				printf "$(GREEN)                             _  _             _ $(RESET)\n"
				printf "$(GREEN)                            (_)| |           | |$(RESET)\n"
				printf "$(GREEN)  ____   ___   ____   ____   _ | |  ____   _ | |$(RESET)\n"
				printf "$(GREEN) / ___) / _ \ |    \ |  _ \ | || | / _  ) / || |$(RESET)\n"
				printf "$(GREEN)( (___ | |_| || | | || | | || || |( (/ / ( (_| |$(RESET)\n"
				printf "$(GREEN) \____) \___/ |_|_|_|| ||_/ |_||_| \____) \____|$(RESET)\n"
				printf "$(GREEN)                     |_|                        $(RESET)\n"
				printf "																\n"

.PHONY: 		all clean fclean re