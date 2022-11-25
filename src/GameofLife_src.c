https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include <stdio.h>
#include <stdlib.h>

#define FAILURE 0
#define SUCCESS !FAILURE

#define USER_NAME "aca02pr"		//replace with your username

void print_help();
int process_command_line(int argc, char *argv[]);

typedef enum MODE {CPU, OPENMP, CUDA, ALL} MODE;

unsigned int grid_width = 0;
unsigned int grid_height = 0;
unsigned int iterations = 0;
MODE execution_mode = CPU;

int main(int argc, char *argv[]) {

	//TODO: Initialise data depending on M (you should not for example allocated GPU memory for CPU only mode)

	process_command_line(argc, argv);

	//TODO: STEP 1a) optional read input file

	//TODO: STEP 1b) random input if no file provided (probability of being active = 0.33)

	//TODO: STEP 2) execute gol simulation

	//TODO: STEP 3) calculate the cross, spinner and glider counts for the iteration

	//TODO: Step 4) repeat steps 2 and 3 N times

	//TODO: STEP 5) optional save states to output file

	return 0;
}

void print_help(){
	printf("gameoflife_%s N W H M [options]\n", USER_NAME);
	
	printf("where:\n");
	printf("\tN \tis the number of iterations to run the life simulation.\n");
	printf("\tW \tis the width the simulation grid.\n");
	printf("\tH \tis the height the simulation grid.\n");
	printf("\tM \tis the mode with a value of either CPU, OPENMP, CUDA or ALL. The"
		   "\t  \tmode specifies which version of the simulation code should     "
	       "\t  \texecute. ALL executes each version in turn.\n");
	
	printf("[options]:\n");
	printf("\t-i input_file  \tspecifies a binary input file containing a starting "
		   "\t\t             \tstate of the game of life. This file should match   "
		   "\t\t             \tthe specified grid width and height. If no input    "
		   "\t\t             \tfile is specified then random input should be used.\n");
	printf("\t-o output_file \tspecifies a binary output file which will be used to"
		   "\t\t             \twrite the final state of the game of life simulation"
		   "\t\t             \tafter N iterations.\n");
	printf("\t-help          \tthis help message.");
}

int process_command_line(int argc, char *argv[]){
	int i;

	if (argc < 5){
		fprintf(stderr, "Error: Missing program arguments. Correct usage is...\n");
		print_help();
		return FAILURE;
	}

	//first argument is always the executable name
	//read in the non optional command line arguments
	iterations = (unsigned int)atoi(argv[1]);
	grid_width = (unsigned int)atoi(argv[2]);
	grid_height = (unsigned int)atoi(argv[3]);

	//TODO: read in the mode

	//TODO: read in the optional command line arguments

	return SUCCESS;
}