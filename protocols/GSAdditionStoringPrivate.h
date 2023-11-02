
@protocol GSAdditionStoringPrivate <GSAdditionStoring>

@required

- (NSDictionary *)getAdditionDictionary:(GSAddition *)arg1 error:(id*)arg2;
- (bool)mergeAdditionUserInfo:(GSAddition *)arg1 value:(NSDictionary *)arg2 error:(id*)arg3;
- (bool)setAdditionDisplayName:(GSAddition *)arg1 value:(NSString *)arg2 error:(id*)arg3;
- (NSDictionary *)setAdditionNameSpace:(GSAddition *)arg1 value:(NSString *)arg2 error:(id*)arg3;
- (bool)setAdditionOptions:(GSAddition *)arg1 value:(unsigned long long)arg2 error:(id*)arg3;

@end