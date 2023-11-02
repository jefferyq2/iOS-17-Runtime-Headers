
@interface SXJSONDocumentLayout : SXJSONObject <SXDocumentLayout>

@property (nonatomic, readonly) unsigned long long columns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long gutter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long margin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long width;

- (long long)gutterWithValue:(id)arg1 withType:(int)arg2;

@end