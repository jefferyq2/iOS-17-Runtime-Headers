
@interface BCSMeCardParser : NSObject <BCSDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parseString:(id)arg1;

@end