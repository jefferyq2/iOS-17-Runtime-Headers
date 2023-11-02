
@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
    NSURL * _destinationURL;
    int  _overwrite;
    NSURL * _priorOrderedURL;
    bool  _shouldSendOrder;
}

@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic) int overwrite;
@property (nonatomic, retain) NSURL *priorOrderedURL;

+ (id)stringFromOverwriteValue:(int)arg1;

- (void).cxx_destruct;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (id)description;
- (id)destinationURL;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (id)initWithURL:(id)arg1;
- (int)overwrite;
- (id)priorOrderedURL;
- (id)requestBody;
- (void)setDestinationURL:(id)arg1;
- (void)setOverwrite:(int)arg1;
- (void)setPriorOrderedURL:(id)arg1;

@end