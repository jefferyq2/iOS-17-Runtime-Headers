
@interface SSVPlayActivityEventContainerIDs : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _adamID;
    NSString * _cloudAlbumID;
    unsigned long long  _cloudPlaylistID;
    NSString * _globalPlaylistID;
    NSString * _playlistVersionHash;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationStringID;
}

@property (nonatomic, readonly) long long adamID;
@property (nonatomic, readonly, copy) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudPlaylistID;
@property (nonatomic, readonly, copy) NSString *globalPlaylistID;
@property (nonatomic, readonly, copy) NSString *playlistVersionHash;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationStringID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (long long)adamID;
- (id)cloudAlbumID;
- (unsigned long long)cloudPlaylistID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)globalPlaylistID;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playlistVersionHash;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;

@end