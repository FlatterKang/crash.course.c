LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin
all:
	mkdir -p $(BIN_PATH)
	gcc -g -Wall \
	$(LIB_PATH)/csv.c \
	$(LIB_PATH)/split.c \
	$(LIB_PATH)/fread_csv_line.c \
	$(SRC_PATH)/csv_parser_test2.c -o $(BIN_PATH)/csv_parser_test2
clean:
	rm -rf $(BIN_PATH)