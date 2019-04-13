# brew install gtk+3
# brew install pkg-config
# export PKG_CONFIG_PATH="/usr/X11/lib/pkgconfig:/usr/local/Cellar/cairo/1.12.16/lib/pkgconfig/"
# possible reference : https://www.cnblogs.com/ainimei/p/6452073.html

gcc `pkg-config --libs --cflags gtk+-3.0` -O3 -g0 -o ./bin/gui ./src/gui.c  && ./bin/gui