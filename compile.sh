gcc -Wall -g -fPIC -shared bar.c -o libbar.so
gcc -Wall -g foo.c ./libbar.so -o foobar
#./foobar

gcc -Wall -g foo3.c -o foo3

gcc -Wall -g type.c -o type