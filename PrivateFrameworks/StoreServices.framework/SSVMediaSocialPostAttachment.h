
@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding> {
    NSString * _albumIdentifier;
    NSArray * _artists;
    NSData * _assetData;
    NSURL * _assetURL;
    NSString * _attachmentDescription;
    NSString * _categoryName;
    NSMutableDictionary * _childAttachments;
    bool  _deletesAssetWhenFinished;
    bool  _explicitContent;
    double  _previewFrameTimestamp;
    NSString * _subtitle;
    NSString * _title;
    NSString * _uti;
}

@property (nonatomic, copy) NSString *UTI;
@property (nonatomic, copy) NSString *albumIdentifier;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic, copy) NSData *assetData;
@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic, copy) NSString *attachmentDescription;
@property (nonatomic, readonly) long long attachmentType;
@property (nonatomic, copy) NSString *categoryName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deletesAssetWhenFinished;
@property (readonly, copy) NSString *description;
@property (getter=isExplicitContent, nonatomic) bool explicitContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) double previewFrameTimestamp;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)UTI;
- (id)albumIdentifier;
- (id)artists;
- (id)assetData;
- (id)assetURL;
- (id)attachmentDescription;
- (long long)attachmentType;
- (id)categoryName;
- (id)childAttachmentForRelationship:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)deletesAssetWhenFinished;
- (void)enumerateChildAttachmentsUsingBlock:(id /* block */)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isExplicitContent;
- (double)previewFrameTimestamp;
- (void)setAlbumIdentifier:(id)arg1;
- (void)setArtists:(id)arg1;
- (void)setAssetData:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setAttachmentDescription:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setChildAttachment:(id)arg1 forRelationship:(id)arg2;
- (void)setDeletesAssetWhenFinished:(bool)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setPreviewFrameTimestamp:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUTI:(id)arg1;
- (id)subtitle;
- (id)title;

@end