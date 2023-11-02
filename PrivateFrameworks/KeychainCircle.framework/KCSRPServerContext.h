
@interface KCSRPServerContext : KCSRPContext {
    NSData * _salt;
    NSData * _verifier;
}

@property (readonly) NSData *salt;
@property (retain) NSData *verifier;

- (void).cxx_destruct;
- (id)copyChallengeFor:(id)arg1 error:(id*)arg2;
- (id)copyConfirmationFor:(id)arg1 error:(id*)arg2;
- (id)initWithUser:(id)arg1 password:(id)arg2 digestInfo:(const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); int x9; }*)arg3 group:(struct ccdh_gp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg4 randomSource:(struct ccrng_state { int (*x1)(); }*)arg5;
- (id)initWithUser:(id)arg1 salt:(id)arg2 verifier:(id)arg3 digestInfo:(const struct ccdigest_info { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; char *x5; void *x6; int (*x7)(); int (*x8)(); int x9; }*)arg4 group:(struct ccdh_gp { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg5 randomSource:(struct ccrng_state { int (*x1)(); }*)arg6;
- (bool)resetWithPassword:(id)arg1 error:(id*)arg2;
- (id)salt;
- (void)setVerifier:(id)arg1;
- (id)verifier;

@end