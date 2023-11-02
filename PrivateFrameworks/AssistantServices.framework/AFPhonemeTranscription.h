
@interface AFPhonemeTranscription : NSObject <AFTranscriptionType> {
    NSString * _language;
    NSString * _orthography;
    NSArray * _phonemeSuggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *orthography;
@property (nonatomic, retain) NSArray *phonemeSuggestions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (id)orthography;
- (id)phonemeSuggestions;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPhonemeSuggestions:(id)arg1;

@end