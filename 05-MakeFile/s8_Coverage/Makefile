file = main
build:
	gcc $(file).c -o hello --coverage
coverage:build
	@./hello
	@lcov -c -d . -o index.info
	@genhtml index.info -o html --ignore-errors source

clean:
	@rm hello 2> /dev/null
	@rm $(file).gcda $(file).gcno index.info 2> /dev/null

	@rm -rf html 2> /dev/null