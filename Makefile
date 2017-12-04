INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc
LIB_DIR = ./lib

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/

RM = rm -rf

ARCHIVE = ar

LIB = -c

OBJS = ./build/funcionario.o ./build/tratador.o ./build/veterinario.o ./build/animal.o

petferaLib: $(LIB_DIR)/petfera.so $(LIB_DIR)/petfera.a

#BIBLIOTECA LINUX #####################################################

$(LIB_DIR)/petfera.a: LIB = -c
$(LIB_DIR)/petfera.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

$(LIB_DIR)/petfera.so: LIB = -fPIC -c
$(LIB_DIR)/petfera.so: $(OBJS)
	$(CC) -shared -fPIC -o $@ $(OBJS)

#######################################################################

#BIBLIOTECA WINDOWS
###########################################

#OBJETOS
$(OBJ_DIR)/funcionario.o: $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/tratador.o: $(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/veterinario.o: $(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/animal.o: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@


dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test

