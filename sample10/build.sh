gcc -c ./src/square.c -o ./target/square.o
gcc -c ./src/circle.c -o ./target/circle.o
ar -r target/libscmath.a ./target/*.o
# gcc -c ./src/*.c