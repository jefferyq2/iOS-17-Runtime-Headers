
@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource> {
    bool  mAfterChange;
    TSDModifyPrototypeChange * mChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)CGFloatValueForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (bool)containsProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)initWithPrototypeChange:(id)arg1 afterChange:(bool)arg2;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)p_propertyMap;

@end