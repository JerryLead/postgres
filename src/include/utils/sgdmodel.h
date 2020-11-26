#ifndef SGDMODEL_H
#define SGDMODEL_H

#define DEFAULT_BLOCK_PAGE_NUM 256 // 256 * 8KB = 2MB
#define DEFAULT_IO_BIG_BLOCK_SIZE  800 // 1 page = 8K, default 10 pages
#define DEFAULT_BUFFER_SIZE  800 // default 100 pages = 800KB
#define DEFAULT_BUFFER_TUPLE_NUM 50000
#define DEFAULT_BUFFER_BLOCK_NUM 1.0


#define DEFAULT_BATCH_SIZE  10000
#define DEFAULT_ITER_NUM  10
#define DEFAULT_LEARNING_RATE	0.8
#define DEFAULT_MODEL_NAME "LR"
#define DEFAULT_TABLE_NAME "forest"


typedef struct Model {
    char* model_name;
    double total_loss;
	double* w;
    int batch_size;
    double learning_rate;
    double n_features;
    int iter_num;
    int tuple_num;
} Model;


// guc variables
// can be set via "SET VAR = XX" in the psql console
extern int set_io_big_block_size;
extern int set_block_page_num;
extern int set_buffer_size;
extern int set_buffer_tuple_num;
extern double set_buffer_block_num;

extern int set_batch_size;
extern int set_iter_num;
extern double set_learning_rate;

extern char* set_model_name;
extern char* set_table_name;

extern int table_page_number;

extern bool set_run_test;


#endif   