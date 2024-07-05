# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sostdlib.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 21:26:57 by marvin            #+#    #+#              #
#    Updated: 2024/07/05 02:34:23 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOSTDLIB_DIR		=	sostdlib

SOSTDLIB_HEADER		=	sostdlib.h
SOSTDLIB_FILE		=	sostdlib.c ft_atoi.c ft_calloc.c\
						ft_itoa.c ft_atoi_base.c ft_itoa_base.c \
						ft_convert_base.c 

SOSTDLIB			=	$(addprefix $(SOSTDLIB_DIR)/, $(SOSTDLIB_FILE))
SOSTDLIB_HEAD		=	$(addprefix $(SOSTDLIB_DIR)/, $(SOSTDLIB_HEADER))