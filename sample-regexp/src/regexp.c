#include <stdio.h>                                                                                                        
#include <regex.h>

int main() 
{
  char *email = "zhangxiaojing@banyuan.club";
  char *pattern = "^[a-zA-Z0-9_-]+@.+\\.(.+)";
  char errbuf[1024];
  regex_t reg;
  int nm = 10;
  regmatch_t pmatch[nm];
  int err;

  // 参数3：REG_ICASE 忽略大小写
  if(regcomp(&reg, pattern, REG_EXTENDED|REG_ICASE) < 0){
    regerror(err, &reg, errbuf, sizeof(errbuf));
    printf("err:%s\n",errbuf);
    return 1;
  }

  err = regexec(&reg, email, nm, pmatch, 0);

  if (err) {
    if(err == REG_NOMATCH) {
        printf("用户名不存在，请重试\n");
    } else {
        regerror(err, &reg, errbuf, sizeof(errbuf));
        printf("未知错误: %s\n", errbuf);
    }
    return 1;
  }
  printf("%s 是一个合法的邮件，欢迎来半圆.\n", email);
  return 0;
}