# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# This is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

LDLIBS=
CDEFS=
CC=g++
CFLAGS=-Wall ${CDEFS}
INSTALL=install
RM=rm

BPNN:	BPNN.o

BPNN.o:	BPNN.cpp

debug:
	$(CC) BPNN.cpp $(LDLIBS) $(CFLAGS) $(CDEFS) -DDEBUG -g -o BPNN 

run: BPNN
	./BPNN	

clean:
	-rm -f BPNN.o BPNN

install:	xtrlock
	echo 'not yet implemented';

install.man:
	echo 'not yet implemented';

remove:
	echo 'not yet implemented';
