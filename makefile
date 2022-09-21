
LIB=libhelpf.so

TARGET=femtoshell

all:${TARGET}


${TARGET}:${LIB}
	gcc -c main.c
	gcc -o ${TARGET} main.o ./${LIB}

libhelper.a:helper.c 
	gcc -c helper.c
	ar -rs libhelper.a helper.o

libhelpf.so:helper.c
	gcc -shared -fpic -o libhelpf.so helper.c

clean:
	rm ${TARGET} *.o *.a *.so
