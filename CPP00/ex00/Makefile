CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)
BIN := megaphone


all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BIN) a.out

re: fclean all


.PHONY: all clean fclean re