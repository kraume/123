# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/26 23:06:58 by wmaykit           #+#    #+#              #
#    Updated: 2019/06/18 13:50:14 by cwitting         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#for del

DEL = Final

all:
	make -C ./$(DEL) fclean
	git add *
	git commit -m "$(shell echo $(DEL))"
	git push

check:
	git log
