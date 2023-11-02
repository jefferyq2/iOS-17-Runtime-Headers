
@interface SFUserActivityData : NSObject <NSCopying, NSSecureCoding, SFUserActivityData> {
    NSString * _activityType;
    NSArray * _userInfo;
}

@property (nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setActivityType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end