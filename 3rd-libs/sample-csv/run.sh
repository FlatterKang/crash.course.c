# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin
mkdir -p $BIN_PATH
gcc -g -Wall $LIB_PATH/csv.c \
    $LIB_PATH/split.c \
    $LIB_PATH/fread_csv_line.c \
    $SRC_PATH/sample2.c \
    -o $BIN_PATH/sample2 \
    && $BIN_PATH/sample2