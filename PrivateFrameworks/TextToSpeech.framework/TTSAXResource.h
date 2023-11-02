
@interface TTSAXResource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetId;
    unsigned long long  _assetSize;
    AXAsset * _axAsset;
    bool  _canBeDownloaded;
    NSString * _componentSubType;
    long long  _footprint;
    long long  _gender;
    bool  _isInstalled;
    bool  _isNoveltyVoice;
    bool  _isPersonalVoice;
    NSArray * _languages;
    long long  _memoryPeak;
    NSString * _name;
    TTSSpeechVoice * _speechVoice;
    unsigned long long  _subtype;
    NSString * _synthesizerBundleIdentifier;
    unsigned long long  _type;
    TTSVoiceAsset * _voiceAsset;
    NSString * _voiceId;
}

@property (nonatomic, retain) NSString *assetId;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic, retain) AXAsset *axAsset;
@property (nonatomic) bool canBeDownloaded;
@property (nonatomic, retain) NSString *componentSubType;
@property (nonatomic, readonly) NSString *contentPath;
@property (nonatomic) long long footprint;
@property (nonatomic, readonly) long long gender;
@property (nonatomic) bool isInstalled;
@property (nonatomic, readonly) bool isNoveltyVoice;
@property (nonatomic, readonly) bool isPersonalVoice;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSArray *languages;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedNameWithFootprint;
@property (nonatomic) long long memoryPeak;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) TTSSpeechVoice *speechVoice;
@property (nonatomic, readonly) unsigned long long subtype;
@property (nonatomic, retain) NSString *synthesizerBundleIdentifier;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, retain) TTSVoiceAsset *voiceAsset;
@property (nonatomic, readonly) NSString *voiceId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ensureFirstPartyComponents;
- (bool)_isDefault;
- (bool)_isSystemVoice;
- (long long)_resourceFootprintFromStringInput:(id)arg1;
- (long long)_resourceGenderFromStringInput:(id)arg1;
- (unsigned long long)_resourceSubtypeFromStringInput:(id)arg1;
- (unsigned long long)_resourceTypeFromStringInput:(id)arg1;
- (id)assetId;
- (unsigned long long)assetSize;
- (id)axAsset;
- (bool)canBeDownloaded;
- (id)componentSubType;
- (id)contentPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (id)initWithAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isInstalled;
- (bool)isNoveltyVoice;
- (bool)isPersonalVoice;
- (bool)isValid;
- (id)languages;
- (id)localizedName;
- (id)localizedNameWithFootprint;
- (id)localizedStringForKey:(id)arg1;
- (long long)memoryPeak;
- (bool)memoryPeakExceedsActiveJetsamLimit;
- (id)name;
- (id)primaryLanguage;
- (void)setAssetId:(id)arg1;
- (void)setAssetSize:(unsigned long long)arg1;
- (void)setAxAsset:(id)arg1;
- (void)setCanBeDownloaded:(bool)arg1;
- (void)setComponentSubType:(id)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setIsInstalled:(bool)arg1;
- (void)setMemoryPeak:(long long)arg1;
- (void)setSpeechVoice:(id)arg1;
- (void)setSynthesizerBundleIdentifier:(id)arg1;
- (void)setVoiceAsset:(id)arg1;
- (bool)shouldFilterResourceFromUI;
- (id)speechVoice;
- (unsigned long long)subtype;
- (id)synthesizerBundleIdentifier;
- (unsigned long long)type;
- (id)voiceAsset;
- (id)voiceId;

@end