
@protocol INRidePartySizeOptionExport <NSObject, JSExport>

@required

- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })partySizeRange;
- (INPriceRange *)priceRange;
- (void)setPartySizeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPriceRange:(INPriceRange *)arg1;
- (void)setSizeDescription:(NSString *)arg1;
- (NSString *)sizeDescription;

@end