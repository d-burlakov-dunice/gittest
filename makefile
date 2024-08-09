CC=gcc

build: main.c
	echo "building.."
	$(CC) ./src/main.c -o app

