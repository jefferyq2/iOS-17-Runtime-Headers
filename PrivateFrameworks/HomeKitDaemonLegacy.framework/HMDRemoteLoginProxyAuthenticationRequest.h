
@interface HMDRemoteLoginProxyAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {
    NSString * _altDSID;
    NSString * _passwordToken;
    NSString * _rawPassword;
    NSString * _username;
}

@property (nonatomic, retain) NSString *altDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (nonatomic, retain) NSString *passwordToken;
@property (nonatomic, retain) NSString *rawPassword;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *username;
@property (nonatomic, readonly, copy) NSString *xpcMessageName;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (void).cxx_destruct;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (id)passwordToken;
- (id)rawPassword;
- (void)setAltDSID:(id)arg1;
- (void)setPasswordToken:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)xpcMessageName;

@end