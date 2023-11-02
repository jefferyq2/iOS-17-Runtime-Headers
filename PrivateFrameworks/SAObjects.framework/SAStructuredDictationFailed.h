
@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSString *recognition;
@property (nonatomic, copy) NSString *userFacingReasonDescription;
@property (nonatomic, copy) NSString *userFacingReasonTitle;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)recognition;
- (bool)requiresResponse;
- (void)setDialogIdentifier:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setRecognition:(id)arg1;
- (void)setUserFacingReasonDescription:(id)arg1;
- (void)setUserFacingReasonTitle:(id)arg1;
- (id)userFacingReasonDescription;
- (id)userFacingReasonTitle;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_dialogIdentifier;

@end