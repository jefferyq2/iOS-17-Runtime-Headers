
@interface BRSharingCopyShareInfoOperation : BROperation {
    id /* block */  _copyShareInfoCompletionBlock;
    NSURL * _fileURL;
}

@property (copy) id /* block */ copyShareInfoCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)copyShareInfoCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setCopyShareInfoCompletionBlock:(id /* block */)arg1;

@end