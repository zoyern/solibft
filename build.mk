# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    build.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 23:07:18 by marvin            #+#    #+#              #
#    Updated: 2024/04/02 23:07:18 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include src/src.mk
include exemple/exemple.mk

#-I./$(BUILD_INCLUDES)
## include "solibft/all.h"
#❖══════Setup══════❖
NAME		= solibft

#❖═══Compilation═══❖
CC			= cc
CFLAG		= -Wall -Wextra -Werror -I./$(BUILD_INCLUDES) -g3 -gdwarf-4
AR			= ar rc
LIB			= ranlib

#❖══════Build══════❖
BUILD_DIR		= build
SOLIBFT			= $(BUILD_DIR)/$(NAME).a
BUILD_OBJ		= $(BUILD_DIR)/obj
BUILD_INCLUDES	= $(BUILD_DIR)/includes
ALL_INCLUDES	= $(BUILD_INCLUDES)/solibft

#❖══════Objet══════❖
OBJ = $(patsubst $(SRC_DIR)/%.c,$(BUILD_OBJ)/%.o, $(SRC))

#❖═════Folders═════❖
$(OBJ): | $(BUILD_INCLUDES) 

$(BUILD_DIR): 
	mkdir -p $(dir $@)

$(BUILD_OBJ)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAG) -c $< -o $@

$(BUILD_INCLUDES):
	@mkdir -p $(BUILD_INCLUDES)
	@mkdir -p $(ALL_INCLUDES)
	@cp $(LIB_HEADER) $(BUILD_INCLUDES)
	@cp $(HEADERS) $(ALL_INCLUDES)

#❖═════Creat═════❖
$(NAME): $(OBJ)
	${AR} $(SOLIBFT) ${OBJ}
	${LIB} $(SOLIBFT)
	@$(CC) $(SRC_EXEMPLE) $(OBJ) -o $(NAME) $(CFLAG) $(SOLIBFT)