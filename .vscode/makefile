#source file search paths
VPATH = ./src ../raven-set

	# compiler include search paths
INCS = -I./include \
	-I../windex/include \
	-I../raven-set \

LIBS = \
	-lgdiplus -lgdi32 -lcomdlg32 -lstdc++fs \
	#-mwindows

static_link_flags = -static-libstdc++ -static-libgcc -static -lComctl32

# folders
ODIR = ./.vscode/obj

OPT = -g
CCflags = -std=c++17 $(OPT) -D_mingw_

# sources
OBJ_starter = \
	$(ODIR)/main.o \
	$(ODIR)/cObj.o \
	$(ODIR)/cOutput.o \
	$(ODIR)/cxy.o \

OBJ_console = \
	$(ODIR)/console.o \
	$(ODIR)/cObj.o \
	$(ODIR)/cOutput.o \

### COMPILE

$(ODIR)/%.o: %.cpp  
	g++ $< \
	-c -o $@  $(INCS) $(CCflags)

starter: $(OBJ_starter)
	g++ $(OPT) \
	-o bin/starter.exe $^  \
	$(static_link_flags) $(LIBS)

console: $(OBJ_console)
	g++ $(OPT) \
	-o bin/console.exe $^  \
	$(static_link_flags) $(LIBS)

.PHONY: clean
clean:
	del /q .vscode\\obj\\*.o

rebuild : clean starter console


