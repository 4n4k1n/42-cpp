MAKEFLAGS += -s

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -Iinc

VPATH := src
vpath %.cpp src

SRC :=	tests.cpp \
		Accoutn.cpp

OBJDIR := obj
OBJ := $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))
BIN := program

# Colors
CYAN = \033[0;96m
GREEN = \033[0;92m
YELLOW = \033[0;93m
RED = \033[0;91m
BLUE = \033[0;94m
RESET = \033[0m

# Progress tracking
TOTAL_FILES = $(words $(SRC))
COMPILED = 0

all: $(BIN)

$(BIN): | $(OBJDIR) $(OBJ)
	@printf "$(BLUE)⚡ Linking $(BIN)...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJ)
	@printf "$(GREEN)✓ $(BIN) built successfully!$(RESET)\n"

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(eval COMPILED=$(shell echo $$(($(COMPILED)+1))))
	@printf "$(CYAN)[%d/%d]$(RESET) Compiling $(YELLOW)%-30s$(RESET)\r" \
		$(COMPILED) $(TOTAL_FILES) "$(notdir $<)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@if [ $(COMPILED) -eq $(TOTAL_FILES) ]; then printf "\n"; fi

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@printf "$(RED)✗ Cleaned object files$(RESET)\n"

fclean: clean
	@rm -f $(BIN) a.out
	@printf "$(RED)✗ Removed $(BIN)$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
