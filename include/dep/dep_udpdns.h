#ifndef  __UL_UDPDNS_DEP_H_
#define  __UL_UDPDNS_DEP_H_


/**
 *  从DNS服务器获取域名对应的IP
 *
 *  @param[in]  sockfd    UDP客户端套节字
 *  @param[in]  servaddr  服务器网络地址
 *  @param[in]  domain    待解析的域名
 *  @param[out] ip        DNS服务器返回的解析出的IP
 *  @return 返回结果
 * - 0   成功
 * - -1  失败
 */
extern int gethostwithfd_r(int sockfd, struct sockaddr *servaddr, char *domain, char *ip);



/**
 *  从DNS服务器获取域名对应的IP
 *
 *  @param[in]  dnshost    DNS服务器名
 *  @param[in]  port       服务端口
 *  @param[in]  domain     待解析的域名
 *  @param[out] ip         DNS服务器返回的解析出的IP
 *  @return 返回结果
 * - 0   成功
 * - -1  失败
 */
extern int gethostipbyname_r(char *dnshost, int port, char *domain, char *ip);

#endif  //__UL_UDPDNS_DEP_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 */
