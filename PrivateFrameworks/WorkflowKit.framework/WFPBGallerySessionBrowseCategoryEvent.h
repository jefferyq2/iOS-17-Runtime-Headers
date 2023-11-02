
@interface WFPBGallerySessionBrowseCategoryEvent : PBCodable <NSCopying> {
    NSString * _galleryCategoryIdentifier;
    NSString * _key;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) NSString *galleryCategoryIdentifier;
@property (nonatomic, readonly) bool hasGalleryCategoryIdentifier;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)galleryCategoryIdentifier;
- (bool)hasGalleryCategoryIdentifier;
- (bool)hasKey;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionIdentifier;
- (void)setGalleryCategoryIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end