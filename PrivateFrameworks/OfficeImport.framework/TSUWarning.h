
@interface TSUWarning : NSObject {
    NSString * _detailMessage;
    long long  _kind;
    NSString * _message;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *detailMessage;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) long long severity;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)fontWarningWithMessage:(id)arg1 fontNames:(id)arg2;
+ (id)warningWithKind:(long long)arg1 message:(id)arg2;
+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 affectedObject:(id)arg2;
+ (id)warningWithMessage:(id)arg1 affectedObjects:(id)arg2;

- (void).cxx_destruct;
- (void)addAffectedObjects:(id)arg1;
- (id)affectedObjects;
- (id)detailMessage;
- (unsigned long long)hash;
- (id)initWithKind:(long long)arg1 message:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFontWarning;
- (long long)kind;
- (id)message;
- (void)setAffectedObjects:(id)arg1;
- (void)setDetailMessage:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)severity;
- (id)userInfo;

@end