CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -Iinc

VPATH := src
vpath %.cpp src

SRC := megaphone.cpp

OBJDIR := obj
OBJ := $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
BIN := program

all: $(BIN)

$(BIN): | $(OBJDIR) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(BIN) a.out

re: fclean all

.PHONY: all clean fclean re