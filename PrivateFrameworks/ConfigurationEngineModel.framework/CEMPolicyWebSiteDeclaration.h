
@interface CEMPolicyWebSiteDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadHostnames;
    NSString * _payloadMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadHostnames;
@property (nonatomic, copy) NSString *payloadMode;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withHostnames:(id)arg3;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadHostnames;
- (id)payloadMode;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadHostnames:(id)arg1;
- (void)setPayloadMode:(id)arg1;

@end