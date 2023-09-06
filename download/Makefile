src = $1
cc = g++
target = $2

COMPILER_FLAGS = -Wall \
-std=c++17 \
-Wno-missing-braces \
-Wunused-result \
-O1  \

LINKER_FLAGS = -L. \
-L/usr/local/lib \
-lraylib -lGL \
-lm -lpthread -ldl -lrt \
-lX11 -latomic\
 
INCLUDE_FLAGS = -I. \
-I/usr/local/include

prog:
   $(cc) $(src) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(INCLUDE_FLAGS) -o $(target)

all:prog


    
