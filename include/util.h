/* 用于输出各种辅助信息，以便debug的辅助函数库 */

#ifndef UTIL_H
#define UTIL_H

#include "fs.h"

int min(int a, int b);

void err_exit(const char *msg);

/* 输出加载的 superblock 的信息 */
void pr_superblock_information(const struct super_block *superblock);

#endif