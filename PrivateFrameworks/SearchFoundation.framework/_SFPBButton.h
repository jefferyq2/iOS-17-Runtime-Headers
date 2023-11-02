
@interface _SFPBButton : PBCodable <NSSecureCoding, _SFPBButton> {
    _SFPBImage * _image;
    bool  _isSelected;
    _SFPBImage * _selectedImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBImage *selectedImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)selectedImage;
- (void)setImage:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end