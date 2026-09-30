PLATFORM = $(shell uname)

PROGRAMS = slr

DEFAULT: $(PROGRAMS)

#### EXPERIMENTS MODE 
#### using -DNDEBUG turns asserts off. Use it only for timing. 
##CFLAGS = -m64 -Winline -DNDEBUG -O3 -Wall 

#DEBUG MODE 
CFLAGS = -m64 -Winline -g -O3 -Wall

CC = g++ $(CFLAGS)

slr:  slrmain.o flood.o map.o pixel_buffer.o grid.o 
	$(CC) -o $@ slrmain.o flood.o map.o pixel_buffer.o grid.o $(LIBS)


slrmain.o: slrmain.c flood.hpp grid.h  map.h pixel_buffer.h stb_image_write.h
	$(CC) $(CFLAGS) -o $@ -c slrmain.c 

pixel_buffer.o: 

grid.o: 

flood.o:

map.o: 

clean: 
	rm -f *.o $(PROGRAMS)
