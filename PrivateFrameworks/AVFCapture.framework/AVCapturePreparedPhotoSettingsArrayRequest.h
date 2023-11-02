
@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {
    bool  _completed;
    id /* block */  _completionHandler;
    NSArray * _photoSettingsArray;
    unsigned long long  _requestID;
}

@property (getter=isCompleted, nonatomic) bool completed;
@property (readonly) id /* block */ completionHandler;
@property (readonly) NSArray *photoSettingsArray;
@property (readonly) unsigned long long requestID;

+ (id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(id /* block */)arg2;

- (id)_initWithArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setRequestID:(unsigned long long)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (bool)isCompleted;
- (id)photoSettingsArray;
- (unsigned long long)requestID;
- (void)setCompleted:(bool)arg1;

@end