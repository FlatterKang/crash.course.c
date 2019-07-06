# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin
TARGET_PATH=./target

rm -rf $TARGET_PATH
rm -rf $BIN_PATH
mkdir -p $BIN_PATH
mkdir -p $TARGET_PATH

gcc -c $LIB_PATH/csv.c -o $TARGET_PATH/csv.o
gcc -c $LIB_PATH/fread_csv_line.c -o $TARGET_PATH/fread_csv_line.o
gcc -c $LIB_PATH/split.c -o $TARGET_PATH/split.o
ar cr $TARGET_PATH/libcsv.a $TARGET_PATH/*.o
rm -rf $TARGET_PATH/*.o

gcc -L $TARGET_PATH/ -l csv $SRC_PATH/csv_parser_test2.c -o $BIN_PATH/csv_parser_test2 && $BIN_PATH/csv_parser_test2
