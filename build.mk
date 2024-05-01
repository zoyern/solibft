# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    build.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 23:07:18 by marvin            #+#    #+#              #
#    Updated: 2024/05/01 21:25:18 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include src/src.mk
include exemple/exemple.mk

#❖═══Setup══════════❖
NAME		= solibft

#❖═══Dependencies═══❖

DEPENDENCIES_DIR := dependencies

DEPENDENCIES := \
    sotypes:https://github.com/zoyern/sotypes.git

dependencies:
	@mkdir -p $(DEPENDENCIES_DIR)
	@for dep in $(DEPENDENCIES); do \
		name=$$(echo $$dep | cut -d ':' -f 1); \
		url=$$(echo $$dep | awk -F':' '{print substr($$0, index($$0, ":") + 1)}'); \
		if [ ! -d $(DEPENDENCIES_DIR)/$$name ]; then \
			echo "Cloning $$name..."; \
			git clone $$url $(DEPENDENCIES_DIR)/$$name; \
		else \
			echo "Pulling $$name..."; \
			(cd $(DEPENDENCIES_DIR)/$$name && git pull); \
		fi \
	done

#❖═══Compilation════❖
CC			= cc
CFLAG		= -Wall -Wextra -Werror -I./$(BUILD_INCLUDES) -g3 -gdwarf-4
AR			= ar rc
LIB			= ranlib

#❖═══Build══════════❖
BUILD_DIR		= build
LIBRARY			= $(BUILD_DIR)/$(NAME).a
BUILD_OBJ		= $(BUILD_DIR)/obj
BUILD_INCLUDES	= $(BUILD_DIR)/includes
ALL_B_INCLUDES	= $(BUILD_INCLUDES)/$(NAME)

#❖═══Libs═══════════❖
LIBS_DIR		= libs
LIBS_NAMES		= sotypes
LIBRARYS		= $(addsuffix .a, $(addprefix $(LIBS_DIR)/$(BUILD_DIR)/, $(LIBS_NAMES)))
LIBS_OBJ		= $(LIBS_DIR)/$(LIBS_NAMES)/$(BUILD_DIR)//obj
LIBS_INCLUDES	= $(LIBS_DIR)/$(LIBS_NAMES)/$(BUILD_DIR)/includes
ALL_L_INCLUDES	= $(LIBS_INCLUDES)/$(LIBS_NAMES)

#❖═══Objet══════════❖
OBJ = $(patsubst $(SRC_DIR)/%.c,$(BUILD_OBJ)/%.o, $(SRC))

#❖═══Folders════════❖
$(OBJ): | $(BUILD_INCLUDES) 

$(BUILD_DIR): 
	mkdir -p $(dir $@)

$(BUILD_OBJ)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAG) -c $< -o $@

$(BUILD_INCLUDES):
	@mkdir -p $(BUILD_INCLUDES)
	@mkdir -p $(ALL_B_INCLUDES)
	@cp $(LIB_HEADER) $(BUILD_INCLUDES)
	@cp $(HEADERS) $(ALL_B_INCLUDES)

#❖═════Creat═════❖
$(NAME): $(OBJ) dependencies
	@${AR} $(LIBRARY) ${OBJ}
	@${LIB} $(LIBRARY)
	@$(CC) $(SRC_EXEMPLE) $(OBJ) -o $(NAME) $(CFLAG) $(LIBRARY)
