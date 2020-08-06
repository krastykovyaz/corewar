/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/04 11:33:27 by zaz               #+#    #+#             */
/*   Updated: 2020/08/06 20:40:53 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Toutes les tailles sont en octets.
** On part du principe qu'un int fait 32 bits. Est-ce vrai chez vous ?
*/

#define IND_SIZE				2
#define REG_SIZE				4 /*Размер этой переменной в октетах обозначен в константе, Размер переменной в октетах */
#define DIR_SIZE				REG_SIZE/*размер аргумента типа T_DIR == константе REG_SIZE*/


# define REG_CODE				1
# define DIR_CODE				2
# define IND_CODE				3


#define MAX_ARGS_NUMBER			4
#define MAX_PLAYERS				4 /*одновременно могут сражаться в памяти*/
#define MEM_SIZE				(4*1024)
#define IDX_MOD					(MEM_SIZE / 8) /*участке памяти, где будут биться чемпионы, т е каретка не сможет за один прыжок переместиться дальше*/
#define CHAMP_MAX_SIZE			(MEM_SIZE / 6) /*ограничение для виртуальной машины, максимальный объем исполняемого кода, Champion exec code size*/

#define COMMENT_CHAR			'#' /*в качестве комментария будет восприниматься всё между символом # и концом строки, Альтернативный комментарий ';' */
#define LABEL_CHAR				':' /*за самой меткой должен следовать символ*/
#define DIRECT_CHAR				'%' /*символ прямого аргумента*/
#define SEPARATOR_CHAR			',' /* специальный символ-разделитель*/

#define LABEL_CHARS				"abcdefghijklmnopqrstuvwxyz_0123456789" /*в составе метки не могут присутствовать другие символы*/

#define NAME_CMD_STRING			".name" /*В файле с кодом чемпиона определено его имя .name    "Batman"*/
#define COMMENT_CMD_STRING		".comment" /*определен комментарий чемпиона*/

#define REG_NUMBER				16 /*Количество регистров, r1, r2, r3 ... r16 */

#define CYCLE_TO_DIE			1536
#define CYCLE_DELTA				50
#define NBR_LIVE				21
#define MAX_CHECKS				10
/*Если количество выполненных за cycles_to_die период операций live больше или равно NBR_LIVE, значение cycles_to_die уменьшается на CYCLE_DELTA. Если MAX_CHECKS проверок спустя значение cycles_to_die не изменится, то оно будет принудительно уменьшено на значение CYCLE_DELTA.*/
/*
**
*/

typedef char	t_arg_type;

#define T_REG					1
#define T_DIR					2 /*число переданное в качестве аргумента будет воспринято «как есть»*/
#define T_IND					4 /*число представляет собой адрес, аргумента по модулю — <АРГУМЕНТ> % IDX_MOD*/
#define T_LAB					8

/*
**
*/

# define PROG_NAME_LENGTH		(128) /*максимальная длина строки с именем, Champion name*/
# define COMMENT_LENGTH			(2048) /*Длина строки-комментария, Champion comment*/
# define COREWAR_EXEC_MAGIC		0xea83f3 /*«магическое число»*/

typedef struct		header_s
{
  unsigned int		magic;
  char				prog_name[PROG_NAME_LENGTH + 1];
  unsigned int		prog_size;
  char				comment[COMMENT_LENGTH + 1];
  unsigned char        *exec_code;
}					header_t;
