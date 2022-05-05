# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acomak <acomak@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 11:40:22 by acomak            #+#    #+#              #
#    Updated: 2022/03/26 16:40:01 by acomak           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	@echo "		       _       _      ";
	@echo "		      (_\     /_)     ";
	@echo "		        ))   ((       ";
	@echo "		      .-'''''''-.	  ";
	@echo "		  /^\/  _.   _.  \/^\ ";
	@echo "		  \(   /__\ /__\   )/ ";
	@echo "		   \,  \o_/_\o_/  ,/  ";
	@echo "		     \    (_)    /    ";
	@echo "		      '-.'==='.-'     ";
	@echo "		       __) - (__     |; ";
	@echo "		      /  '~~~'  \   /| ";
	@echo "		     /  /     \  \_/ / ";
	@echo "		     \ :       ; ___/  ";
	@echo "		      \|==(*)==|      ";
	@echo "		       :       :      ";
	@echo "		        \  |  /       ";
	@echo "		      ___)=|=(___     ";
	@echo "		     {____/ \____}    ";
	@echo " \n \n                      DERLENİYOR...  \n \n \n ";
	
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o
clean:
	@rm -f  *.o
fclean: clean
	@echo "		       _       _      ";
	@echo "		      (_\     /_)     ";
	@echo "		        ))   ((       ";
	@echo "		      .-'''''''-.	  ";
	@echo "		  /^\/  _.   _.  \/^\ ";
	@echo "		  \(   /__\ /__\   )/ ";
	@echo "		   \,  \o_/_\o_/  ,/  ";
	@echo "		     \    (_)    /    ";
	@echo "		      '-.'==='.-'     ";
	@echo "		       __) - (__      ";
	@echo "		      /  '~~~'  \     ";
	@echo "		     /  /     \  \    ";
	@echo "		     \ :       ; /    ";
	@echo "		      \|==(*)==|/     ";
	@echo "		       :       :      ";
	@echo "		        \  |  /       ";
	@echo "		      ___)=|=(___     ";
	@echo "		     {____/ \____}    ";
	@echo " \n \n                     TEMİZLENİYOR...  \n \n \n ";

	@rm -f $(NAME)

re: fclean all
