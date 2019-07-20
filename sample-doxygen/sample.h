/**
* @file  CommonType.h  
* @brief 常见类型定义
* @author       Vincent
* @date     2015-5-24 
* @version  A001 
* @copyright Vincent                                                              
*/
void print_one_line_csv(char *line);

/** 
 * 读取文件
 * @param[in]    fileNameLen    文件名长度
 * @param[in]   fileName    文件名
 * @param[in]    dataLen        数据长度
 * @param[out]  fileData    输出数据
 * @return        0，执行成功，非0，失败，详见
 * @ref            RetCode.h
 * @see
 * @note
 */ 
int getEntry(int argc, char **argv);
