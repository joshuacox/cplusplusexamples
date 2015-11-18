#!/usr/bin/make -f
SHELL = /bin/sh

all: clean input streamTest

streamTest:
	g++ streamTest.cpp -o streamTest


# notice I added '-@' to the beginning of this line
# '-' means I don't care if it fails carry on without stopping
# '@' means 'quiet', ie don't print out the commmand that is being ran
clean:
	echo loud
	@ echo quiet
	-@rm -f streamTest

input:
	echo 'hello world'>input
