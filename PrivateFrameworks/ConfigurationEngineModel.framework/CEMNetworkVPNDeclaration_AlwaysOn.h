
@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase {
    NSNumber * _payloadAllowAllCaptiveNetworkPlugins;
    NSNumber * _payloadAllowCaptiveWebSheet;
    NSArray * _payloadAllowedCaptiveNetworkPlugins;
    NSArray * _payloadServiceExceptions;
    NSArray * _payloadTunnelConfigurations;
    NSNumber * _payloadUIToggleEnabled;
}

@property (nonatomic, copy) NSNumber *payloadAllowAllCaptiveNetworkPlugins;
@property (nonatomic, copy) NSNumber *payloadAllowCaptiveWebSheet;
@property (nonatomic, copy) NSArray *payloadAllowedCaptiveNetworkPlugins;
@property (nonatomic, copy) NSArray *payloadServiceExceptions;
@property (nonatomic, copy) NSArray *payloadTunnelConfigurations;
@property (nonatomic, copy) NSNumber *payloadUIToggleEnabled;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithTunnelConfigurations:(id)arg1;
+ (id)buildWithTunnelConfigurations:(id)arg1 withUIToggleEnabled:(id)arg2 withServiceExceptions:(id)arg3 withAllowCaptiveWebSheet:(id)arg4 withAllowAllCaptiveNetworkPlugins:(id)arg5 withAllowedCaptiveNetworkPlugins:(id)arg6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAllowAllCaptiveNetworkPlugins;
- (id)payloadAllowCaptiveWebSheet;
- (id)payloadAllowedCaptiveNetworkPlugins;
- (id)payloadServiceExceptions;
- (id)payloadTunnelConfigurations;
- (id)payloadUIToggleEnabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAllCaptiveNetworkPlugins:(id)arg1;
- (void)setPayloadAllowCaptiveWebSheet:(id)arg1;
- (void)setPayloadAllowedCaptiveNetworkPlugins:(id)arg1;
- (void)setPayloadServiceExceptions:(id)arg1;
- (void)setPayloadTunnelConfigurations:(id)arg1;
- (void)setPayloadUIToggleEnabled:(id)arg1;

@end