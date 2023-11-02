
@interface SUPageSectionGroup : NSObject <NSCopying> {
    long long  _defaultSectionIndex;
    NSArray * _sections;
    long long  _style;
    UIColor * _tintColor;
    long long  _tintStyle;
}

@property (nonatomic) long long defaultSectionIndex;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) long long tintStyle;

- (long long)_sectionStyleForString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)defaultSectionIndex;
- (id)initWithSectionsDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)loadFromDictionary:(id)arg1;
- (id)sections;
- (void)setDefaultSectionIndex:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (long long)style;
- (id)tintColor;
- (long long)tintStyle;

@end