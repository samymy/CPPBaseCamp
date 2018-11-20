NAME = show_args

LIB = my_lib.a

LIB_SRC = show_args.cpp

LIB_OBJ = $(LIB_SRC:.cpp=.o)

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

INC = *.hpp

.cpp.o:
	@g++ -c $<

all:  $(NAME)

$(NAME): $(INC) $(LIB_OBJ) $(OBJ)
	@ar rcs $(LIB) $(LIB_OBJ)
	@g++ -o $(NAME) $(OBJ) $(LIB)

clean:
	@rm -f $(LIB_OBJ) $(OBJ)

fclean: clean
	@rm -f $(LIB) $(NAME)

re: fclean all
