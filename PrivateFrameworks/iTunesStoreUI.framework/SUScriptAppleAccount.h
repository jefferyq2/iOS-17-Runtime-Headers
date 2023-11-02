
@interface SUScriptAppleAccount : SUScriptObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
}

@property (readonly) NSString *accountDescription;
@property (readonly) SUScriptAppleAccountType *accountType;
@property (readonly) SUScriptAppleAccountCredential *credential;
@property (readonly) NSString *dsID;
@property (readonly) NSString *identifier;
@property (readonly) ACAccount *nativeAccount;
@property (readonly) ACAccountStore *nativeAccountStore;
@property (readonly) NSString *username;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)accountDescription;
- (id)accountType;
- (id)attributeKeys;
- (id)credential;
- (void)dealloc;
- (id)dsID;
- (id)identifier;
- (id)initWithACAccount:(id)arg1 accountStore:(id)arg2;
- (id)nativeAccount;
- (id)nativeAccountStore;
- (void)reload;
- (id)scriptAttributeKeys;
- (void)setAgeVerificationExpirationDate:(id)arg1 completionHandler:(id)arg2;
- (id)username;

@end