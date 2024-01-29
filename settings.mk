ifndef SETTINGS_MK
	SETTINGS_MK := 1

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::TARGET::

NAME	=	ft_printf

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::SOURCE::

SRC		=	$Sft_numbers.c \
			$Sft_printf.c \
			$Sft_strings.c \
			$Smain.c

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::COMPILERS::

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

endif