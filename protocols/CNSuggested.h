
@protocol CNSuggested <NSObject>

@required

- (bool)isSuggested;
- (NSString *)suggestionFoundInBundleId;
- (SGRecordId *)suggestionRecordId;

@end