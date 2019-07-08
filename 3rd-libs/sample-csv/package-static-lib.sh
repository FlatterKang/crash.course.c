# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
TMP_PATH=./target

rm -rf $TMP_PATH && mkdir -p $TMP_PATH

gcc -c $LIB_PATH/csv.c -o $TMP_PATH/csv.o
gcc -c $LIB_PATH/fread_csv_line.c -o $TMP_PATH/fread_csv_line.o
gcc -c $LIB_PATH/split.c -o $TMP_PATH/split.o

ar cr $LIB_PATH/libcsv.a $TMP_PATH/*.o

rm -rf $TMP_PATH
