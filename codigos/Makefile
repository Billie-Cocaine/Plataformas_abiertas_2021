CC = gcc
CFLAGS = -Wall 
OBJETFILE = factoriales.c 
FILE1 = letras.c 
FILE2 = triangular.c
TARGET = factorialesejecutable
TARGET1 = letrasejecutable
TARGET2 = triangularejecutable

arc1: $(TARGET)

$(TARGET): $(OBJETFILE)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJETFILE)



arc2: $(TARGET1)

$(TARGET1): $(FILE1)
	$(CC) $(CFLAGS) -o $(TARGET1) $(FILE1)


arc3: $(TARGET2)

$(TARGET2): $(FILE2)
	$(CC) $(CFLAGS) -o $(TARGET2) $(FILE2)