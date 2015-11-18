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
	-@rm input

input:
	echo 'helloworldwithoutspace then hello world but this will all be ignored'>input
	echo 'second line for kicks'>>input
	echo 'third line for kicks'>>input
