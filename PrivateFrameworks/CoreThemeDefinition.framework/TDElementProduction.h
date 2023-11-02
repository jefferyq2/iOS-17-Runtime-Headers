
@interface TDElementProduction : NSManagedObject

@property (nonatomic, retain) TDRenditionKeySpec *baseKeySpec;
@property (nonatomic, retain) NSString *comment;
@property (nonatomic, retain) NSDate *dateOfLastChange;
@property (nonatomic, retain) NSNumber *isExcludedFromFilter;
@property (nonatomic) bool makeOpaqueIfPossible;
@property (nonatomic, retain) TDNamedElement *name;
@property (nonatomic, retain) TDSchemaPartDefinition *partDefinition;
@property (nonatomic, retain) TDThemeConstant *renditionSubtype;
@property (nonatomic, retain) TDRenditionType *renditionType;
@property (nonatomic, retain) NSSet *renditions;
@property (nonatomic, retain) NSSet *tags;
@property (nonatomic, retain) NSString *universalTypeIdentifier;
@property (nonatomic, retain) TDThemeConstant *zeroCodeArtworkInfo;

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (id)associatedFileURLWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (id)relativePath;

@end