
@interface ALAssetsGroup : NSObject {
    id  _internal;
}

@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, retain) ALAssetsGroupPrivate *internal;

- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)_typeAsString;
- (id)_uuid;
- (bool)addAsset:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3;
- (id)internal;
- (bool)isEditable;
- (bool)isValid;
- (long long)numberOfAssets;
- (struct CGImage { }*)posterImage;
- (void)setAssetsFilter:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end