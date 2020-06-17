NAME = read_file

SRC = src/*.c

INC = inc/*.h

COMPILLER = -std=c11 -Wall -Wextra -Werror -Wpedantic -o 

all: install
install:
	@cp $(SRC) .
	@cp $(INC) .
	@clang $(COMPILLER) $(NAME) *.c 
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf *.c
	@rm -rf *.h
reinstall: uninstall install
	