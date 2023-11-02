
@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying> {
    float  _temperatureInMired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float temperatureInKelvin;
@property (nonatomic, readonly) float temperatureInMired;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)hf_RGBColorRepresentation;
- (id)hf_temperatureColorRepresentation;
- (id)init;
- (id)initWithTemperatureInKelvin:(float)arg1;
- (id)initWithTemperatureInMired:(float)arg1;
- (bool)isEqual:(id)arg1;
- (float)temperatureInKelvin;
- (float)temperatureInMired;
- (id)valueDescription;
- (id)valueDescriptionInKelvin;

@end