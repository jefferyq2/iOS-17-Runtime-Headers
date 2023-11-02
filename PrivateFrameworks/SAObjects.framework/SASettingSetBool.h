
@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) bool toggle;
@property (nonatomic) bool value;

+ (id)setBool;
+ (id)setBoolWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setToggle:(bool)arg1;
- (void)setValue:(bool)arg1;
- (bool)toggle;
- (bool)value;

@end