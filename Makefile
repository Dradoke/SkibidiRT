# Project Name
NAME			=	minirt

# Compiler Setting
CC				=	cc
CFLAG			=	-Wall -Wextra -Werror -g3

# Directory
LIB_DIR			=	lib/
SRC_DIR			=	src/
OBJ_DIR			=	obj/
INC_DIR			=	include/

# Library Path & File
LIBFT_DIR		=	$(LIB_DIR)libft/
LIBFT			=	$(LIBFT_DIR)libft.a

MLX42_DIR		=	$(LIB_DIR)MLX42/
MLX42			=	$(MLX42_DIR)/build/libmlx42.a
# Source File
SRC				=	$(BUILTINS) $(DEBUG) $(EXEC) $(PARSER) $(UTILS) src/skibidi_shell.c

UTILS			=	$(addprefix $(BUILTINS_DIR)/, \
					builtins_utils.c \
					builtins_utils2.c \
					ft_builtins.c \
					ft_cd.c \
					ft_echo.c \
					ft_env.c \
					ft_exit.c \
					ft_export.c \
					ft_pwd.c \
					ft_unset.c \
					)

DEBUG_DIR		=	src/debug
DEBUG			=	$(addprefix $(DEBUG_DIR)/, \
					print_list.c \
					)

EXEC_DIR		=	src/exec
EXEC			=	$(addprefix $(EXEC_DIR)/, \
					ft_critical_exec.c \
					ft_exec.c \
					ft_heredoc.c \
					ft_path.c \
					ft_pipe.c \
					is_critical.c \
					)

PARSER_DIR		=	src/parser
PARSER			=	$(addprefix $(PARSER_DIR)/, \
					ft_addarg.c \
					ft_addredir.c \
					ft_cpyword.c \
					ft_env_to_lst.c \
					ft_parser.c \
					)

UTILS_DIR		=	src/utils
UTILS			=	$(addprefix $(UTILS_DIR)/, \
					ft_env_utils2.c \
					ft_env_utils.c \
					ft_error.c \
					ft_exec_utils.c \
					ft_free.c \
					ft_isdelim.c \
					ft_lsttoarray.c \
					ft_signal.c \
					ft_skipspace.c \
					ft_var_expand.c \
					)

# Object File
OBJ				=	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# Include Flag
IFLAG			=	$(addprefix -I, \
					$(INC_DIR) \
					$(LIBFT_DIR)/include \
					$(MLX42_DIR)/include \
					)

# Libraries
LFLAG			=	$(addprefix -l, \
					mlx42
					)

#•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
# Library Dependencies for MLX42
MLX_DEPS		=	-ldl -lglfw -pthread -lm

# All Target
all: $(NAME)

# LibFT Make Rule
libft:
	@$(MAKE) -s -C $(LIBFT_DIR)

# MLX42 Make Rule
libmlx:
	@cmake $(MLX42_DIR) -B $(MLX42_DIR)/build && make -C $(MLX42_DIR)/build -j4

# Main Target
$(NAME): $(OBJ) libft libmlx
	@$(CC) $(CFLAG) $(OBJ) $(LIBFT) $(MLX42) $(MLX_DEPS) -o $(NAME)
	@echo "Welcome $@ ! 🤩🤙"

# Object File Compilation Rule
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAG) $(IFLAG) -c $< -o $@
	@echo "Good Morning $(notdir $@) ! 👋😇"

#•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

# Mandatory Target
clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -s -C $(LIBFT_DIR) clean
	@rm -rf $(MLX42_DIR)/build
	@echo "See You Soon $(OBJ_DIR) And Your Content... 🤧💔"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) fclean
	@echo "Bye-Bye $(NAME) ! 🥺💋"

re: fclean all

#•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

# Phony Target
.PHONY: all clean fclean re libft libmlx
