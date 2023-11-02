
@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider> {
    CDPContext * _context;
    unsigned long long  _prevailingSecret;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cooldownErrorWithUnderlyingError:(id)arg1;
- (id)globalHardLimitError;
- (id)globalHardLimitErrorWithRecord:(id)arg1;
- (void)handleHardLimitError:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSoftLimitError:(id)arg1 completion:(id /* block */)arg2;
- (id)hardLimitErrorForRecord:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;
- (void)setPrevailingSecret:(unsigned long long)arg1;
- (bool)supportsErrorPresentation;
- (id)verficationFailedErrorwithUnderlyingError:(id)arg1;

@end