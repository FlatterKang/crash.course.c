gcc -L /usr/local/Cellar/libxml2/2.9.9_2/lib -l xml2 -I /usr/local//Cellar/libxml2/2.9.9_2/include/libxml2 ./src/xmlparser.c  -o ./bin/xmlparser && ./bin/xmlparser ./data/story.xml
#gcc `pkg-config --libs --cflags libxml-2.0` ./src/xmlparser.c -o ./bin/xmlparser && ./bin/xmlparser ./data/story.xml