#WORK_PATH=~/CPC02
clear;
printf "ENTER PATH:\\n Makes sure it does not have / at the end, or the program will NOT compile:\\n"
read WORK_PATH

clear;


norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*/*.c;
norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*/*.h;
sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex00.c $WORK_PATH/ex00/ft_create_elem.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex01.c ft_create_elem.c $WORK_PATH/ex01/ft_list_push_front.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex02.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex02/ft_list_size.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex03.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex03/ft_list_last.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX04 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex04.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex04/ft_list_push_back.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX04 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX05 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex05.c ft_create_elem.c $WORK_PATH/ex05/ft_list_push_strs.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX05 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX06 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex06.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex06/ft_list_clear.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX06 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX07 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex07.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex07/ft_list_at.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX07 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX08 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex08.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex08/ft_list_reverse.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX08 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX09 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex09.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex09/ft_list_foreach.c && ./a.out > ex09.output;
diff ex09.output ex09.corr > ex09.diff;
cat ex09.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX09 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX10 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex10.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex10/ft_list_foreach_if.c && ./a.out > ex10.output;
diff ex10.output ex10.corr > ex10.diff;
cat ex10.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX10 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX11 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex11.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex11/ft_list_find.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX11 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX12 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex12.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex12/ft_list_remove_if.c && ./a.out > ex12.output;
diff ex12.output ex12.corr > ex12.diff;
cat ex12.diff
printf "\\033[0;32mIF NOTHING IS DISPLAYED ABOVE - EVERYTHING WORKED FINE\\033[0m\\n\\n";
printf "\\n";
printf '>>>>>>>>>> END OF EX12 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX13 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex13.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex13/ft_list_merge.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX13 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX14 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex14.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex14/ft_list_sort.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX14 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX15 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex15.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex15/ft_list_reverse_fun.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX15 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX16 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex16.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex16/ft_sorted_list_insert.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX16 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX17 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra -I ./ ex17.c ft_list_push_front.c ft_create_elem.c $WORK_PATH/ex17/ft_sorted_list_merge.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX17 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";
