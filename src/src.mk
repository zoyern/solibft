# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    src.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 18:55:59 by marvin            #+#    #+#              #
#    Updated: 2024/04/01 18:55:59 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include $(CURDIR)/src/sostdlib/sostdlib.mk
include $(CURDIR)/src/sostdio/sostdio.mk
include $(CURDIR)/src/soctype/soctype.mk
include $(CURDIR)/src/sostring/sostring.mk

SRC_DIR		= $(CURDIR)/src

DIR			= $(SOSTDLIB_DIR)
DIR			+= $(SOSTDIO_DIR)
DIR			+= $(SOCTYPE_DIR)
DIR			+= $(SOSTRING_DIR)

LIB_HEADER	= $(addprefix $(SRC_DIR)/, solibft.h)

SRC_HEADER	=  types.h all.h
SRC_HEADER	+= $(SOSTDLIB_HEAD)
SRC_HEADER	+= $(SOSTDIO_HEAD)
SRC_HEADER	+= $(SOCTYPE_HEAD)
SRC_HEADER	+= $(SOSTRING_HEAD)

SRC_FILES	= solibft.c
SRC_FILES	+= $(SOSTDLIB)
SRC_FILES	+= $(SOSTDIO)
SRC_FILES	+= $(SOCTYPE)
SRC_FILES	+= $(SOSTRING)

HEADERS		= $(addprefix $(SRC_DIR)/, $(SRC_HEADER))
SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
FOLDERS		= $(addprefix $(SRC_DIR)/, $(DIR))
FOLDERS		+= $(SRC_DIR)
