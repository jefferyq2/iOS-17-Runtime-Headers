
@interface MSRichLink : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) LPLinkMetadata *_linkMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_linkMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_linkMetadata:(id)arg1;

@end