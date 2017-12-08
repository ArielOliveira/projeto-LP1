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

OBJS = ./build/funcionario.o ./build/tratador.o ./build/veterinario.o ./build/animal.o ./build/anfibio.o ./build/ave.o ./build/mamifero.o ./build/reptil.o ./build/nativo.o ./build/exotico.o ./build/anfibioNativo.o ./build/anfibioExotico.o ./build/aveNativa.o ./build/aveExotica.o ./build/mamiferoNativo.o ./build/mamiferoExotico.o ./build/reptilNativo.o ./build/reptilExotico.o

petferaLib: $(LIB_DIR)/petfera.so $(LIB_DIR)/petfera.a

################### BIBLIOTECA LINUX ######################

$(LIB_DIR)/petfera.a: LIB = -c
$(LIB_DIR)/petfera.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

$(LIB_DIR)/petfera.so: LIB = -fPIC -c
$(LIB_DIR)/petfera.so: $(OBJS)
	$(CC) -shared -fPIC -o $@ $(OBJS)

###########################################################

################## BIBLIOTECA WINDOWS #####################




###########################################################

#OBJETOS
$(OBJ_DIR)/funcionario.o: $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/tratador.o: $(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/veterinario.o: $(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/animal.o: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/ave.o: $(SRC_DIR)/ave.cpp $(INC_DIR)/ave.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/anfibio.o: $(SRC_DIR)/anfibio.cpp $(INC_DIR)/anfibio.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/mamifero.o: $(SRC_DIR)/mamifero.cpp $(INC_DIR)/mamifero.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/reptil.o: $(SRC_DIR)/reptil.cpp $(INC_DIR)/reptil.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/nativo.o: $(SRC_DIR)/nativo.cpp $(INC_DIR)/nativo.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/exotico.o: $(SRC_DIR)/exotico.cpp $(INC_DIR)/exotico.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/anfibioNativo.o: $(SRC_DIR)/anfibioNativo.cpp $(INC_DIR)/anfibioNativo.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/anfibioExotico.o: $(SRC_DIR)/anfibioExotico.cpp $(INC_DIR)/anfibioExotico.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/aveNativa.o: $(SRC_DIR)/aveNativa.cpp $(INC_DIR)/aveNativa.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/aveExotica.o: $(SRC_DIR)/aveExotica.cpp $(INC_DIR)/aveExotica.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/mamiferoNativo.o: $(SRC_DIR)/mamiferoNativo.cpp $(INC_DIR)/mamiferoNativo.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/mamiferoExotico.o: $(SRC_DIR)/mamiferoExotico.cpp $(INC_DIR)/mamiferoExotico.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/reptilNativo.o: $(SRC_DIR)/reptilNativo.cpp $(INC_DIR)/reptilNativo.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/reptilExotico.o: $(SRC_DIR)/reptilExotico.cpp $(INC_DIR)/reptilExotico.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(LIB_DIR)/*

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test

