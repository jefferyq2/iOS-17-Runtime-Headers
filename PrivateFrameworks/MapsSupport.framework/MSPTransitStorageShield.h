
@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    struct { 
        unsigned int shieldType : 1; 
    }  _has;
    NSString * _shieldColorString;
    NSString * _shieldText;
    long long  _shieldType;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShieldColorString;
@property (nonatomic, readonly) bool hasShieldText;
@property (nonatomic) bool hasShieldType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShieldColorString;
- (bool)hasShieldText;
- (bool)hasShieldType;
- (unsigned long long)hash;
- (id)initWithShield:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShieldType:(bool)arg1;
- (void)setShieldColorString:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (id)shieldColorString;
- (id)shieldText;
- (long long)shieldType;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end