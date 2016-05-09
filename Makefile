all: build-simple build-paralyze

build-simple:
	gcc -Wall defunkt-bomb-simple.c -o defunkt-bomb-simple

build-paralyze:
	gcc -Wall defunkt-bomb-paralyze.c -o defunkt-bomb-paralyze
