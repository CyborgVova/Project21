#WORK_PATH=~/CPC02
clear;
printf "ENTER PATH:\\n Makes sure it does not have / at the end, or the program will NOT compile:\\n"
read WORK_PATH

clear;
cat ../.boot1.txt
printf "\033[0;32mACAMI\033[0m";
cat ../.boot1_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ../.boot2.txt
printf "\033[0;35mRBOWEN\033[0m";
cat ../.boot2_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ../.boot3.txt
printf "\033[0;33mGGOOFBAL\033[0m";
cat ../.boot3_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;
cat ../.boot4.txt
printf "\033[0;36mHBRENDON\033[0m";
cat ../.boot4_1.txt
printf "\\n";
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; sleep 0.1; printf "#"; 
clear;

printf "\\n";

norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*;
norminette -R CheckDefine $WORK_PATH/ex01;
norminette -R CheckDefine $WORK_PATH/ex02;

sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
printf "\033[0;32mIf the program does not compile - your .H file is not working properly\033[0m\\n";
gcc -Wall -Werror -Wextra -DWORKPATH=\"$WORK_PATH/ex00/ft.h\" ex00.c ex00_func.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
printf "\033[0;32mIf the program does not compile - your .H file is not working properly\033[0m\\n";
printf "The next line should display the message for \033[0;32mEVEN\033[0m amount of lines\\n";
gcc -Wall -Werror -Wextra -DWORKPATH=\"$WORK_PATH/ex01/ft_boolean.h\" ex01.c && ./a.out a b;
printf "\\n";
printf "The next line should display the message for \033[0;32mODD\033[0m amount of lines\\n";
gcc -Wall -Werror -Wextra -DWORKPATH=\"$WORK_PATH/ex01/ft_boolean.h\" ex01.c && ./a.out a b c;
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex02.c -DWORKPATH=\"$WORK_PATH/ex02/ft_abs.h\" && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex03.c -DWORKPATH=\"$WORK_PATH/ex03/ft_point.h\" && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX04 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex04.c $WORK_PATH/ex04/ft_strs_to_tab.c  -I./ && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX04 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX05 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex05.c $WORK_PATH/ex05/ft_show_tab.c $WORK_PATH/ex04/ft_strs_to_tab.c -I./ && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX05 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";
