rm -rf ./target/*
gcc ./src/square.c ./src/circle.c -fPIC -shared -o ./target/libscmath.so
# gcc -c ./src/circle.c -o ./target/circle.o  
# gcc -c ./src/square.c -o ./target/square.o  
# gcc ./target/circle.o ./target/square.o -dynamiclib -current_version 1.0 -o ./target/libscmath.dylib
