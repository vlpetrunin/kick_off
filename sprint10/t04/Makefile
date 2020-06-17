NAME = mx_wc

COMPILLER = -std=c11 -Wall -Wextra -Werror -Wpedantic 

all: install
install:
	@cp inc/*.h .
	@cp src/*.c .
	@clang $(COMPILLER) -o $(NAME) *.c 
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf *.c
	@rm -rf *.h
reinstall: uninstall install