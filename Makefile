# files
SRC  = ${wildcard src/*.c}
OBJ  = ${addsuffix .o,${subst src/,bin/,${basename ${SRC}}}}

APP = ./bin/ydclock

# compiler related
C = gcc
CVER = c99
CFLAGS = \
	-O3 \
	-std=${CVER} \
	-Wall \
	-pedantic \
	-g \
	-Wno-deprecated-declarations

# rules
compile: ./bin ${OBJ} ${SRC}
	${C} -o ${APP} ${OBJ}

./bin:
	mkdir -p bin

bin/%.o: src/%.c
	${C} -c $< ${CFLAGS} -o $@

clean:
	rm bin/*.o $(APP)

all:
	@echo compile
	@echo clean
