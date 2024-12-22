
CPP      := g++
CPPFLAGS := $(CPPFLAGS) -std=c++17 -Wall -Wextra

APPLICATION := bank
OBJECTS := account.o main.o

all: $(APPLICATION)

$(APPLICATION): $(OBJECTS)
	$(CPP) -o $@ $(CPPFLAGS) $(OBJECTS)

$(OBJECTS): %.o: %.cpp
	$(CXX) -c -o $@ $(CPPFLAGS) $<

.PHONY: clean
clean:
	find . -name '*~' -o -name '*.o' -o -name $(APPLICATION) | xargs rm
