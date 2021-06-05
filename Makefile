CC = gcc
CFLAGS = -Wall 
OBJETFILE = codigo_E1.c 
FILE1 = codigo_E2.c 
FILE2 = codigo_E3.c 
TARGET = Ejecutable_E1
TARGET1 = Ejecutable_E2
TARGET2 = Ejecutable_E3

arc1: $(TARGET)

$(TARGET): $(OBJETFILE)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJETFILE)



arc2: $(TARGET1)

$(TARGET1): $(FILE1)
	$(CC) $(CFLAGS) -o $(TARGET1) $(FILE1)


arc3: $(TARGET2)

$(TARGET2): $(FILE2)
	$(CC) $(CFLAGS) -o $(TARGET2) $(FILE2)