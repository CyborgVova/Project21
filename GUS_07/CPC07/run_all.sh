#WORK_PATH=~/CPC02
clear;
printf 'ENTER PATH:  '
read WORK_PATH

cat ../README.md
printf "\\n";

printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;
printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25; printf "#"; sleep 0.25;

printf "\\n";

norminette -R CheckForbiddenSourceHeader $WORK_PATH/ex*;

sleep 3;

printf ">>>>>>>>>>>>>> EX00 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex00.c $WORK_PATH/ex00/ft_strdup.c && ./a.out;
printf "If the next line is EMPTY - errno test was forgotten!\\n";
grep "errno" $WORK_PATH/ex00/ft_strdup.c;
printf "\\n";
printf '>>>>>>>>>> END OF EX00 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX01 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex01.c $WORK_PATH/ex01/ft_range.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX01 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX02 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex02.c $WORK_PATH/ex02/ft_ultimate_range.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX02 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX03 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex03.c $WORK_PATH/ex03/ft_strjoin.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX03 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX04 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex04.c $WORK_PATH/ex04/ft_convert_base.c $WORK_PATH/ex04/ft_convert_base2.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX04 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";

printf ">>>>>>>>>>>>>> EX05 <<<<<<<<<<<<<<\\n";
gcc -Wall -Werror -Wextra ex05.c $WORK_PATH/ex05/ft_split.c && ./a.out;
printf "\\n";
printf '>>>>>>>>>> END OF EX05 <<<<<<<<<<<';
printf "\\n\\n\\n\\n\\n";
