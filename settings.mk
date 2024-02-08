ifndef SETTINGS_MK
	SETTINGS_MK := 1

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::TARGET::

NAME	=	libftprintf.a

ifeq ($(MAKECMDGOALS), bonus)
NAME	=	libftprintf_bonus.a
endif

UNAME	=	$(shell uname)

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::SOURCE::

SRC		=	$Sft_numbers.c \
			$Sft_printf.c \
			$Sft_strings.c 

ifeq ($(MAKECMDGOALS), bonus)
SRC		=
endif

ifeq ($(MAKECMDGOALS), debug)
SRC		= $Sft_numbers.c \
			$Sft_printf.c \
			$Sft_strings.c \
			$Smain.c
endif

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::COMPILERS::

CC		=	gcc

ifeq ($(UNAME), Darwin)
CC	=	clang
endif

CFLAGS	=	-Wall -Wextra -Werror

AR		=	ar

ARFLAGS	=	rcs

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::LIBRARY::

IS_LIB	= 	false

LIB		= 	$Llibft.a

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::FT_PRINTF::

IS_PTF	= 	false

PTF		= 	$Plibftprintf.a

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::MINILIBX::

IS_MLX	= 	false

MLX		= 	$Mlibmlx_$(UNAME).a

endif