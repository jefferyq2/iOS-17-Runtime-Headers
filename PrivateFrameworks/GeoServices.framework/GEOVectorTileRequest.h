
@interface GEOVectorTileRequest : PBCodable <NSCopying> {
    NSString * _accessKey;
    NSString * _countryCode;
    struct { 
        unsigned int has_lineId : 1; 
        unsigned int has_latitudeHint : 1; 
        unsigned int has_longitudeHint : 1; 
        unsigned int has_scale : 1; 
        unsigned int has_size : 1; 
        unsigned int has_style : 1; 
        unsigned int has_version : 1; 
        unsigned int has_x : 1; 
        unsigned int has_y : 1; 
        unsigned int has_z : 1; 
        unsigned int has_preflight : 1; 
        unsigned int has_venuesPreflight : 1; 
        unsigned int has_vloc : 1; 
        unsigned int read_accessKey : 1; 
        unsigned int read_countryCode : 1; 
        unsigned int read_languageCode : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _languageCode;
    float  _latitudeHint;
    unsigned long long  _lineId;
    float  _longitudeHint;
    bool  _preflight;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _scale;
    unsigned int  _size;
    unsigned int  _style;
    bool  _venuesPreflight;
    unsigned int  _version;
    bool  _vloc;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic, retain) NSString *accessKey;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasAccessKey;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic) bool hasLatitudeHint;
@property (nonatomic) bool hasLineId;
@property (nonatomic) bool hasLongitudeHint;
@property (nonatomic) bool hasPreflight;
@property (nonatomic) bool hasScale;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasStyle;
@property (nonatomic) bool hasVenuesPreflight;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool hasVloc;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZ;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) float latitudeHint;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) float longitudeHint;
@property (nonatomic) bool preflight;
@property (nonatomic) unsigned int scale;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int style;
@property (nonatomic) bool venuesPreflight;
@property (nonatomic) unsigned int version;
@property (nonatomic) bool vloc;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)accessKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessKey;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (bool)hasLatitudeHint;
- (bool)hasLineId;
- (bool)hasLongitudeHint;
- (bool)hasPreflight;
- (bool)hasScale;
- (bool)hasSize;
- (bool)hasStyle;
- (bool)hasVenuesPreflight;
- (bool)hasVersion;
- (bool)hasVloc;
- (bool)hasX;
- (bool)hasY;
- (bool)hasZ;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)languageCode;
- (float)latitudeHint;
- (unsigned long long)lineId;
- (float)longitudeHint;
- (void)mergeFrom:(id)arg1;
- (bool)preflight;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)scale;
- (void)setAccessKey:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasLatitudeHint:(bool)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHasLongitudeHint:(bool)arg1;
- (void)setHasPreflight:(bool)arg1;
- (void)setHasScale:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasVenuesPreflight:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHasVloc:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasZ:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLatitudeHint:(float)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)setLongitudeHint:(float)arg1;
- (void)setPreflight:(bool)arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setVenuesPreflight:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVloc:(bool)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned int)style;
- (bool)venuesPreflight;
- (unsigned int)version;
- (bool)vloc;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

@end