export PKG_CONFIG_PATH="/usr/local/opt/libxml2/lib/pkgconfig"
gcc `pkg-config --libs --cflags libxml-2.0` ./src/xmlparser.c -o ./bin/xmlparser && ./bin/xmlparser ./data/story.xml
