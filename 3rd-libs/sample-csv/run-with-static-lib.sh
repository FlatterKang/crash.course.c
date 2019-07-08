# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin

gcc -L $LIB_PATH/ -l csv $SRC_PATH/sample2.c -o $BIN_PATH/sample2 && $BIN_PATH/sample2
