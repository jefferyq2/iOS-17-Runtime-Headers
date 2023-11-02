
@interface PXBasicTileAnimationOptions : NSObject <NSCopying> {
    double  _delay;
    double  _duration;
    unsigned long long  _flags;
    bool  _shouldNotifyTiles;
    bool  _shouldSnapshotDynamicContents;
    long long  _style;
}

@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool shouldNotifyTiles;
@property (nonatomic) bool shouldSnapshotDynamicContents;
@property (nonatomic) long long style;

+ (id)defaultAnimationOptions;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (id)description;
- (double)duration;
- (unsigned long long)flags;
- (id)init;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setShouldNotifyTiles:(bool)arg1;
- (void)setShouldSnapshotDynamicContents:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldNotifyTiles;
- (bool)shouldSnapshotDynamicContents;
- (long long)style;

@end