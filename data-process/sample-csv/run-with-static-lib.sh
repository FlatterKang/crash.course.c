# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin

gcc -L $LIB_PATH/ -l csv $SRC_PATH/csv_parser_test2.c -o $BIN_PATH/csv_parser_test2 && $BIN_PATH/csv_parser_test2
