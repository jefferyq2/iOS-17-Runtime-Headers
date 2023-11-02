
@interface FlexSongBackend : NSObject <FlexSongProtocol> {
    NSString * _artistName;
    NSArray * _assets;
    NSString * _audioEncoderPresetName;
    NSDictionary * _customOptions;
    bool  _hidden;
    NSSet * _keywords;
    long long  _metadataVersion;
    bool  _recalled;
    long long  _sampleRate;
    NSString * _songFormat;
    NSString * _songName;
    NSSet * _tagIDs;
    NSString * _uid;
    NSDictionary * _weightedKeywords;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, copy) NSString *audioEncoderPresetName;
@property (nonatomic, readonly) bool canPlay;
@property (nonatomic, copy) NSDictionary *customOptions;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) bool isLoaded;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic) long long metadataVersion;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumDuration;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } naturalDuration;
@property (nonatomic) bool recalled;
@property (nonatomic) long long sampleRate;
@property (nonatomic, copy) NSString *songFormat;
@property (nonatomic, copy) NSString *songName;
@property (nonatomic, copy) NSSet *tagIDs;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSDictionary *weightedKeywords;

- (void).cxx_destruct;
- (bool)_verifyClips:(id)arg1 inRendition:(id)arg2 failureReason:(out id*)arg3;
- (bool)_verifyKeyFrames:(id)arg1 failureReason:(id*)arg2;
- (id)artistName;
- (id)assetWithID:(id)arg1;
- (id)assets;
- (id)audioEncoderPresetName;
- (bool)canPlay;
- (id)customOptions;
- (id)existingAssetWithID:(id)arg1;
- (bool)hidden;
- (id)idealDurations;
- (id)initWithUID:(id)arg1 songName:(id)arg2 artistName:(id)arg3 tagIDs:(id)arg4 keywords:(id)arg5 weightedKeywords:(id)arg6 hidden:(bool)arg7 recalled:(bool)arg8 audioEncoderPresetName:(id)arg9 metadataVersion:(long long)arg10 songFormat:(id)arg11 sampleRate:(long long)arg12 customOptions:(id)arg13;
- (bool)isLoaded;
- (id)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (id)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(id)arg2 testingContext:(id)arg3;
- (long long)sampleRate;
- (void)setArtistName:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setAudioEncoderPresetName:(id)arg1;
- (void)setCustomOptions:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setMetadataVersion:(long long)arg1;
- (void)setRecalled:(bool)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setSongFormat:(id)arg1;
- (void)setSongName:(id)arg1;
- (void)setTagIDs:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setWeightedKeywords:(id)arg1;
- (id)songFormat;
- (id)songName;
- (id)tagIDs;
- (id)timedMetadataItemsWithIdentifier:(id)arg1 forRendition:(id)arg2;
- (id)uid;
- (void)updateAssets:(id)arg1;
- (void)updateSampleRate:(long long)arg1;
- (void)updateSongArtist:(id)arg1 title:(id)arg2 tags:(id)arg3 keywords:(id)arg4 weightedKeywords:(id)arg5 hidden:(bool)arg6 recalled:(bool)arg7 metadataVersion:(long long)arg8;
- (bool)verifyRendition:(id)arg1 forDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 failureReason:(id*)arg3;
- (id)weightedKeywords;

@end