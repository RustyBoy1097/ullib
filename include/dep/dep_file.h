/**
 * 不推荐使用的文件操作库
 *
 * 这里的函数是不推荐使用，只为兼容老版本ullib库
 *
 **/
#ifndef __DEP_FILE_H
#define __DEP_FILE_H
/**
 *  Function description: The following three functions are used in display the  running process.
 *  Arguments in: char *remark, int base, int goint.
 */

/**
 * @brief used in display the  running process
 *
 * @deprecated 与file无关
**/
int ul_showgo(char *remark, int goint);

/**
 * @brief used in display the  running process
 *
 * @deprecated 与file无关
**/
int ul_showgocmp(char *remark, int base, int goint);

/**
 * @brief used in display the  running process
 *
 * @deprecated 与file无关
**/
int ul_showgoend(char *remark, int base, int goint);


#endif // __DEP_FILE_H

/* vim: set ts=4 sw=4 sts=4 tw=100 noet: */
