#otool -L  3rd/lib/libscmath.so 
rm -rf bin/*
gcc ./src/client.c -L ./3rd/lib/ -l scmath -I ./3rd/include -o bin/client 
install_name_tool -change ./target/libscmath.so ./3rd/lib/libscmath.so bin/client
./bin/client
