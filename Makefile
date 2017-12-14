INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin
DOC_DIR = ./doc
LIB_DIR = ./lib
DATA_DIR = ./data

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)/

RM = rm -rf

ARCHIVE = ar

LIB = -c

OBJS = ./build/funcionario.o ./build/tratador.o ./build/veterinario.o ./build/animal.o ./build/animalSilvestre.o ./build/anfibio.o ./build/ave.o ./build/mamifero.o ./build/reptil.o ./build/nativo.o ./build/exotico.o ./build/anfibioNativo.o ./build/anfibioExotico.o ./build/aveNativa.o ./build/aveExotica.o ./build/mamiferoNativo.o ./build/mamiferoExotico.o ./build/reptilNativo.o ./build/reptilExotico.o ./build/registroFuncionario.o ./build/carregarFuncionario.o
EXEC = ./build/main.o

.PHONY: petferaLibLinux petferaLibWindows progsLinux progsWindows clean dir

petferaLibLinux: $(LIB_DIR)/petfera.so $(LIB_DIR)/petfera.a

petferaLibWindows: $(LIB_DIR)/petfera.lib $(LIB_DIR)/petfera.dll

progsLinux: $(BIN_DIR)/prog_estatico $(BIN_DIR)/prog_dinamico

progsWindows: $(BIN_DIR)/prog_estatico.exe $(BIN_DIR)/prog_dinamico.exe

################### BIBLIOTECA LINUX ######################

$(LIB_DIR)/petfera.a: LIB = -c
$(LIB_DIR)/petfera.a: $(OBJS)
	$(AR) rcs $@ $^

$(LIB_DIR)/petfera.so: LIB = -fPIC -c
$(LIB_DIR)/petfera.so: $(OBJS)
	$(CC) -shared -fPIC -o $@ $^

###########################################################

################## BIBLIOTECA WINDOWS #####################
$(LIB_DIR)/petfera.lib: LIB = -c
$(LIB_DIR)/petfera.lib: $(OBJS)
	$(AR) rcs $@ $^

$(LIB_DIR)/petfera.dll: LIB = -c
$(LIB_DIR)/petfera.dll: $(OBJS)
	$(CC) -shared -o $^

###########################################################

##################### EXECUTAVEIS #########################

## LINUX ##
$(BIN_DIR)/prog_estatico: $(EXEC)
	$(CC) $^ $(CPPFLAGS) $(LIB_DIR)/petfera.a -o $@

$(BIN_DIR)/prog_dinamico: $(EXEC)
	$(CC) $^ $(CPPFLAGS) $(LIB_DIR)/petfera.so -o $@

## WINDOWS ##
$(BIN_DIR)/prog_estatico.exe: $(EXEC)
	$(CC) $^ $(CPPFLAGS) $(LIB_DIR)/petfera.lib -o $@

$(BIN_DIR)/prog_dinamico.exe: $(EXEC)
	$(CC) $^ $(CPPFLAGS) $(LIB_DIR)/petfera.dll -o $@



############################################################	

#OBJETOS

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(INC_DIR)/petferaLib.h
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/funcionario.o: $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/tratador.o: $(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/veterinario.o: $(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/animal.o: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/animalSilvestre.o: $(SRC_DIR)/animalSilvestre.cpp $(INC_DIR)/animalSilvestre.h
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

$(OBJ_DIR)/registroFuncionario.o: $(SRC_DIR)/registroFuncionario.cpp $(INC_DIR)/registroFuncionario.h
	$(CC) $(CPPFLAGS) $(LIB) $< -o $@

$(OBJ_DIR)/carregarFuncionario.o: $(SRC_DIR)/carregarFuncionario.cpp $(INC_DIR)/carregarFuncionario.h
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
	mkdir -p data
	mkdir -p test

