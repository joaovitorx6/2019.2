/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TESTE_H_RPCGEN
#define _TESTE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct operands {
	int x;
	int z;
};
typedef struct operands operands;

#define SIMP_PROG 0x2fffffff
#define SIMP_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define soma 1
extern  int * soma_1(operands *, CLIENT *);
extern  int * soma_1_svc(operands *, struct svc_req *);
#define subtracao 2
extern  int * subtracao_1(operands *, CLIENT *);
extern  int * subtracao_1_svc(operands *, struct svc_req *);
#define divisao 3
extern  int * divisao_1(operands *, CLIENT *);
extern  int * divisao_1_svc(operands *, struct svc_req *);
#define multiplicacao 4
extern  int * multiplicacao_1(operands *, CLIENT *);
extern  int * multiplicacao_1_svc(operands *, struct svc_req *);
#define maior 5
extern  int * maior_1(operands *, CLIENT *);
extern  int * maior_1_svc(operands *, struct svc_req *);
#define exponenciacao 6
extern  int * exponenciacao_1(operands *, CLIENT *);
extern  int * exponenciacao_1_svc(operands *, struct svc_req *);
#define menor 7
extern  int * menor_1(operands *, CLIENT *);
extern  int * menor_1_svc(operands *, struct svc_req *);
extern int simp_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define soma 1
extern  int * soma_1();
extern  int * soma_1_svc();
#define subtracao 2
extern  int * subtracao_1();
extern  int * subtracao_1_svc();
#define divisao 3
extern  int * divisao_1();
extern  int * divisao_1_svc();
#define multiplicacao 4
extern  int * multiplicacao_1();
extern  int * multiplicacao_1_svc();
#define maior 5
extern  int * maior_1();
extern  int * maior_1_svc();
#define exponenciacao 6
extern  int * exponenciacao_1();
extern  int * exponenciacao_1_svc();
#define menor 7
extern  int * menor_1();
extern  int * menor_1_svc();
extern int simp_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_operands (XDR *, operands*);

#else /* K&R C */
extern bool_t xdr_operands ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TESTE_H_RPCGEN */
