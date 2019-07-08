export PKG_CONFIG_PATH="/usr/local/opt/libxml2/lib/pkgconfig"
gcc `pkg-config --libs --cflags libxml-2.0` ./src/sample1.c -o ./bin/sample1 && ./bin/sample1 ./data/story.xml
