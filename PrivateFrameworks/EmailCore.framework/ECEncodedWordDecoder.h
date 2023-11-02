
@interface ECEncodedWordDecoder : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _encodedTextRange;
    long long  _encodedWordEncoding;
    NSData * _headerData;
    NSString * _language;
    NSNumber * _stringEncoding;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } encodedTextRange;
@property (nonatomic) long long encodedWordEncoding;
@property (nonatomic, readonly, copy) NSData *headerData;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSNumber *stringEncoding;

- (void).cxx_destruct;
- (bool)_decodeBEncodedTextToData:(id)arg1;
- (bool)_decodeQEncodedTextToData:(id)arg1;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_encodedWordLanguageDelimiter;
- (id)_encodedWordStartSequence;
- (void)_enumerateQByteRangesUsingBlock:(id /* block */)arg1;
- (id)_lineSeparator;
- (bool)decodeEncodedTextToData:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })encodedTextRange;
- (long long)encodedWordEncoding;
- (id)headerData;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithHeaderData:(id)arg1;
- (id)language;
- (void)setEncodedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setEncodedWordEncoding:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setStringEncoding:(id)arg1;
- (id)stringEncoding;

@end