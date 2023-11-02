
@interface INVocabulary : NSObject

+ (id)sharedVocabulary;

- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)init;
- (void)removeAllVocabularyStrings;
- (void)setVocabulary:(id)arg1 ofType:(long long)arg2;
- (void)setVocabularyStrings:(id)arg1 ofType:(long long)arg2;

@end