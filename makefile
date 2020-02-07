all: main.c
	gcc -o ia_editor main.c `pkg-config --cflags --libs gtk+-3.0`
