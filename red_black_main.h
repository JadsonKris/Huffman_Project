typedef struct Red_black red_black;

typedef struct root_rb root;

root *create_root_tree ();

red_black *create_red_black_empty ();

red_black *create_red_black (int data);

red_black *brother_node (red_black *rb);
red_black *uncle_node (red_black *rb);
red_black *grand_father_node (red_black *rb);
red_black *height_node (red_black *rb) ;
red_black *search(root *root_rb, int value);

int node_color (red_black *rb);
/* Esta fun��o serve para conferir a cor de um determinado n�*/

void change_color (red_black *rb);
/* Esta fun��o serve para trocar a cor entre dois n�s.
 * � uma opera��o apenas administrativa, que n�o altera
 * o conte�do ou a estrutura da �rvore.
 */

void left_rotate (red_black *node_a);
/*O n� B assume o lugar do n� A. O n� A vira o filho esquerdo de B.
 * B recebe a cor de A, e A recebe vermelho, podendo ser necess�rio
 * uma corre��o de cores no n� A.
 */

void right_rotate (red_black *node_a);
/*O n� B assume o lugar do n� A. O n� A vira o filho direito de B.
 * B recebe a cor de A, e A recebe vermelho.
 */

void replace_node (root *root_tree, red_black *rb, red_black *new_rb);

void insert_red_black (root *root_tree, int data);
/*Em primeiro lugar, ela verifica se a raiz � nula, se for, cria uma nova raiz.
 * Entrando no else, temos um for que vai rodar at� encontrar um break.
 * Se o novo valor for menor, vai pra esquerda.
 * Se o novo valor for maior. vai pra direita.
 */

void delete_red_black (root *root_tree, int value);

void case1 (root *root_tree, red_black *rb);
void case2 (root *root_tree, red_black *rb);
void case3 (root *root_tree, red_black *rb);
void case4 (root *root_tree, red_black *rb);
void case5 (root *root_tree, red_black *rb);

void delete_case1 (root *root_tree, red_black *rb);
void delete_case2 (root *root_tree, red_black *rb);
void delete_case3 (root *root_tree, red_black *rb);
void delete_case4 (root *root_tree, red_black *rb);
void delete_case5 (root *root_tree, red_black *rb);
void delete_case6 (root *root_tree, red_black *rb);

void print_pre_order (red_black *rb);
