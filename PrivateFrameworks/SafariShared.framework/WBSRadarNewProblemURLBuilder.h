
@interface WBSRadarNewProblemURLBuilder : NSObject {
    NSArray * _attachmentURLs;
    long long  _classification;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _descriptionText;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *attachmentURLs;
@property (nonatomic) long long classification;
@property (nonatomic, copy) NSString *componentName;
@property (nonatomic, copy) NSString *componentVersion;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (long long)classification;
- (id)componentName;
- (id)componentVersion;
- (id)descriptionText;
- (void)setAttachmentURLs:(id)arg1;
- (void)setClassification:(long long)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)url;

@end