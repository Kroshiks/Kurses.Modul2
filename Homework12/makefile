all: temp

temp: main.o temp_api.o
	gcc -o temp main.o temp_api.o

main.o: main.c temp_api.h
	gcc -c -o main.o main.c

temp_api.o: temp_api.c temp_api.h
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o temp.exe

