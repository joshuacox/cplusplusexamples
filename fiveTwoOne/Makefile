#!/usr/bin/make -f
SHELL = /bin/sh

all: clean fiveTwentyOne

c: clean fiveTwentyOneC

fiveTwentyOne:
	g++ fiveTwentyOne.cpp -o fiveTwentyOne

fiveTwentyOneC:
	gcc fiveTwentyOne.c -o fiveTwentyOne

# notice I added '-@' to the beginning of this line
# '-' means I don't care if it fails carry on without stopping
# '@' means 'quiet', ie don't print out the commmand that is being ran
clean:
	echo loud
	@ echo quiet
	-@rm -f fiveTwentyOne
