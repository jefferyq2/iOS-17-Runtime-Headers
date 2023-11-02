
@interface DIPage : NSObject <NSSecureCoding> {
    NSArray * _attributes;
    unsigned long long  _page;
    NSDictionary * _serverValidationGroup;
    NSString * _subTitle;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic) unsigned long long page;
@property (nonatomic, copy) NSDictionary *serverValidationGroup;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttributes:(id)arg1 title:(id)arg2 subTitle:(id)arg3 page:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)page;
- (id)serverValidationGroup;
- (void)setAttributes:(id)arg1;
- (void)setPage:(unsigned long long)arg1;
- (void)setServerValidationGroup:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (id)title;

@end