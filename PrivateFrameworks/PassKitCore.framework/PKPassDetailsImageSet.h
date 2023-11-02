
@interface PKPassDetailsImageSet : PKPassImageSet {
    PKImage * _cardHolderPicture;
}

@property (nonatomic, retain) PKImage *cardHolderPicture;

+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardHolderPicture;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)preheatImages;
- (void)setCardHolderPicture:(id)arg1;

@end