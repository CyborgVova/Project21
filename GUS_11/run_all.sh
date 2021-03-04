#WORK_PATH=~/CPC02
clear;
printf "ENTER PATH:\\n Makes sure it does not have / at the end, or the program will NOT compile:\\n"
read WORK_PATH

clear;
cat ./.boot1.txt
printf "\033[0;32mACAMI\033[0m";
cat ./.boot1_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ./.boot2.txt
printf "\033[0;35mRBOWEN\033[0m";
cat ./.boot2_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ./.boot3.txt
printf "\033[0;33mGGOOFBAL\033[0m";
cat ./.boot3_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ./.boot4.txt
printf "\033[0;36mHBRENDON\033[0m";
cat ./.boot4_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;

printf "\\n";

norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*/*.c;
norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*/*.h;
sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex00.c $WORK_PATH/ex00/ft_foreach.c && ./a.out > ex00.output;
diff ex00.output ex00.corr > ex00.diff;
cat ex00.diff;
printf "\033[0;32mIf the line above IS EMPTY - everything worked correctly.\033[0m";
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex01.c $WORK_PATH/ex01/ft_map.c && ./a.out > ex01.output;
diff ex01.output ex01.corr > ex01.diff;
cat ex01.diff;
printf "\033[0;32mIf the line above IS EMPTY - everything worked correctly.\033[0m";
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex02.c $WORK_PATH/ex02/ft_any.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex03.c $WORK_PATH/ex03/ft_count_if.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX04 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex04.c $WORK_PATH/ex04/ft_is_sort.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX04 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX05 <<<<<<<<<<<<<<\\n";
(cd $WORK_PATH/ex05/ && make);
$WORK_PATH/ex05/do-op     --+12t1 + --2          > ex05.output;
$WORK_PATH/ex05/do-op +-+-+-+1 - --+-232t63     >> ex05.output;
$WORK_PATH/ex05/do-op 7893 / --233\t6           >> ex05.output;
$WORK_PATH/ex05/do-op +---+54354323 \* -10      >> ex05.output;
$WORK_PATH/ex05/do-op ++++6235472\;23 % --12    >> ex05.output;
$WORK_PATH/ex05/do-op 7893 / --\t2336           >> ex05.output;
$WORK_PATH/ex05/do-op 123 % ------t0            >> ex05.output;
$WORK_PATH/ex05/do-op one plus two              >> ex05.output;
$WORK_PATH/ex05/do-op 1 %1 2                    >> ex05.output;
diff ex05.output ex05.corr > ex05.diff;
cat ex05.diff;
printf "\033[0;32mIf the line above IS EMPTY - everything worked correctly.\033[0m";
printf "\\n";
printf '>>>>>>>>>> END OF EX05 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX06 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex06.c $WORK_PATH/ex06/ft_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" " "    > ex06.output;
gcc -Wall -Werror -Wextra ex06.c $WORK_PATH/ex06/ft_sort_string_tab.c && ./a.out  "" " "                                                                                                                 >> ex06.output;
gcc -Wall -Werror -Wextra ex06.c $WORK_PATH/ex06/ft_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" " !a" >> ex06.output;
gcc -Wall -Werror -Wextra ex06.c $WORK_PATH/ex06/ft_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" ""    >> ex06.output;
gcc -Wall -Werror -Wextra ex06.c $WORK_PATH/ex06/ft_sort_string_tab.c && ./a.out "a" ""                                                                                                                  >> ex06.output;
diff ex06.output ex06.corr > ex06.diff;
cat ex06.diff;
printf "\033[0;32mIf the line above IS EMPTY - everything worked correctly.\033[0m";
printf "\\n";
printf '>>>>>>>>>> END OF EX06 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX07 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex07.c $WORK_PATH/ex07/ft_advanced_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" " "    > ex07.output;
gcc -Wall -Werror -Wextra ex07.c $WORK_PATH/ex07/ft_advanced_sort_string_tab.c && ./a.out  "" " "                                                                                                                 >> ex07.output;
gcc -Wall -Werror -Wextra ex07.c $WORK_PATH/ex07/ft_advanced_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" " !a" >> ex07.output;
gcc -Wall -Werror -Wextra ex07.c $WORK_PATH/ex07/ft_advanced_sort_string_tab.c && ./a.out "Hello! This is my amazing string, and it should be sorted according to all the rules and regulations there are!" ""    >> ex07.output;
gcc -Wall -Werror -Wextra ex07.c $WORK_PATH/ex07/ft_advanced_sort_string_tab.c && ./a.out "a" ""                                                                                                                  >> ex07.output;
diff ex07.output ex07.corr > ex07.diff;
cat ex07.diff;
printf "\033[0;32mIf the line above IS EMPTY - everything worked correctly.\033[0m";
printf "\\n";
printf '>>>>>>>>>> END OF EX07 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";
