
@interface IKTextParser : NSObject <NSCopying> {
    NSAttributedString * _attributedString;
}

@property (nonatomic, readonly, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly, retain) NSString *string;

+ (id)textWithAttributedString:(id)arg1;
+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(id /* block */)arg2;
- (id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(id /* block */)arg2 style:(id)arg3;
- (id)_attributesWithFont:(id)arg1 style:(id)arg2;
- (id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;
- (id)attributedString;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4;
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;
- (id)attributedStringWithFontHandler:(id /* block */)arg1 style:(id)arg2;
- (id)attributedStringWithFontHandler:(id /* block */)arg1 style:(id)arg2 defaultAttributes:(id*)arg3;
- (id)attributedStringWithFontHandler:(id /* block */)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;
- (id)attributedStringWithFontHandler:(id /* block */)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id*)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)string;

@end