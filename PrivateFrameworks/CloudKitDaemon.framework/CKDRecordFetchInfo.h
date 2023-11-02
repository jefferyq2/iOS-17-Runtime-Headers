
@interface CKDRecordFetchInfo : NSObject {
    id /* block */  _completionBlock;
    NSError * _error;
    NSString * _etag;
    unsigned long long  _fetchOrder;
    bool  _ignoreErrors;
    CKRecord * _record;
    CKRecordID * _recordID;
    NSObject<OS_dispatch_source> * _recordReadySource;
    double  _startDate;
    unsigned long long  _state;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) unsigned long long fetchOrder;
@property (nonatomic) bool ignoreErrors;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *recordReadySource;
@property (nonatomic, readonly) double startDate;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id /* block */)completionBlock;
- (id)description;
- (id)error;
- (id)etag;
- (unsigned long long)fetchOrder;
- (bool)ignoreErrors;
- (id)initWithAggregator:(id)arg1;
- (void)performCallback;
- (id)record;
- (id)recordID;
- (id)recordReadySource;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFetchOrder:(unsigned long long)arg1;
- (void)setIgnoreErrors:(bool)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordReadySource:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (double)startDate;
- (unsigned long long)state;

@end