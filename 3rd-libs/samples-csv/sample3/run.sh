# reference: https://github.com/semitrivial/csv_parser
LIB_PATH=./lib/csv_parser
SRC_PATH=./src
BIN_PATH=./bin

rm -rf $BIN_PATH && mkdir $BIN_PATH
# cp -R ./data $BIN_PATH/data
gcc -L $LIB_PATH/ -l csv $SRC_PATH/sample.c -I$LIB_PATH -o $BIN_PATH/sample && $BIN_PATH/sample
