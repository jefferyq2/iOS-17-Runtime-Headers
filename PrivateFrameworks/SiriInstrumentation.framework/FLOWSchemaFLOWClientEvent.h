
@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer> {
    FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown * _appleMusicVoicePreviewOfferNotShown;
    FLOWSchemaFLOWEventMetadata * _eventMetadata;
    FLOWSchemaFLOWDomainExecutionContext * _flowDomainExecutionContext;
    FLOWSchemaFLOWEntityContextTier1 * _flowEntityContextTier1;
    FLOWSchemaFLOWStep * _flowStep;
    bool  _hasAppleMusicVoicePreviewOfferNotShown;
    bool  _hasEventMetadata;
    bool  _hasFlowDomainExecutionContext;
    bool  _hasFlowEntityContextTier1;
    bool  _hasFlowStep;
    bool  _hasMediaPlayerPlaybackContextTier1;
    bool  _hasMediaPlayerRadioStationContextTier1;
    bool  _hasPegasusContextTier1;
    bool  _hasSmsAttachmentMetadataTier1;
    FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 * _mediaPlayerPlaybackContextTier1;
    FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 * _mediaPlayerRadioStationContextTier1;
    FLOWSchemaFLOWPegasusContextTier1 * _pegasusContextTier1;
    FLOWSchemaFLOWSmsAttachmentMetadataTier1 * _smsAttachmentMetadataTier1;
    unsigned long long  _whichEvent_Type;
}

@property (nonatomic, retain) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown;
@property (nonatomic, retain) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic, retain) FLOWSchemaFLOWDomainExecutionContext *flowDomainExecutionContext;
@property (nonatomic, retain) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1;
@property (nonatomic, retain) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) bool hasAppleMusicVoicePreviewOfferNotShown;
@property (nonatomic) bool hasEventMetadata;
@property (nonatomic) bool hasFlowDomainExecutionContext;
@property (nonatomic) bool hasFlowEntityContextTier1;
@property (nonatomic) bool hasFlowStep;
@property (nonatomic) bool hasMediaPlayerPlaybackContextTier1;
@property (nonatomic) bool hasMediaPlayerRadioStationContextTier1;
@property (nonatomic) bool hasPegasusContextTier1;
@property (nonatomic) bool hasSmsAttachmentMetadataTier1;
@property (nonatomic, readonly) SISchemaInstrumentationMessage *innerEvent;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 *mediaPlayerPlaybackContextTier1;
@property (nonatomic, retain) FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 *mediaPlayerRadioStationContextTier1;
@property (nonatomic, retain) FLOWSchemaFLOWPegasusContextTier1 *pegasusContextTier1;
@property (nonatomic, retain) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1;
@property (nonatomic, readonly) unsigned long long whichEvent_Type;

+ (int)joinability;

- (void).cxx_destruct;
- (id)appleMusicVoicePreviewOfferNotShown;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentName;
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deleteEventMetadata;
- (void)deleteFlowDomainExecutionContext;
- (void)deleteFlowEntityContextTier1;
- (void)deleteFlowStep;
- (void)deleteMediaPlayerPlaybackContextTier1;
- (void)deleteMediaPlayerRadioStationContextTier1;
- (void)deletePegasusContextTier1;
- (void)deleteSmsAttachmentMetadataTier1;
- (id)dictionaryRepresentation;
- (id)eventMetadata;
- (id)flowDomainExecutionContext;
- (id)flowEntityContextTier1;
- (id)flowStep;
- (int)getAnyEventType;
- (id)getComponentId;
- (bool)hasAppleMusicVoicePreviewOfferNotShown;
- (bool)hasEventMetadata;
- (bool)hasFlowDomainExecutionContext;
- (bool)hasFlowEntityContextTier1;
- (bool)hasFlowStep;
- (bool)hasMediaPlayerPlaybackContextTier1;
- (bool)hasMediaPlayerRadioStationContextTier1;
- (bool)hasPegasusContextTier1;
- (bool)hasSmsAttachmentMetadataTier1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)innerEvent;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaPlayerPlaybackContextTier1;
- (id)mediaPlayerRadioStationContextTier1;
- (id)pegasusContextTier1;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAppleMusicVoicePreviewOfferNotShown:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setFlowDomainExecutionContext:(id)arg1;
- (void)setFlowEntityContextTier1:(id)arg1;
- (void)setFlowStep:(id)arg1;
- (void)setHasAppleMusicVoicePreviewOfferNotShown:(bool)arg1;
- (void)setHasEventMetadata:(bool)arg1;
- (void)setHasFlowDomainExecutionContext:(bool)arg1;
- (void)setHasFlowEntityContextTier1:(bool)arg1;
- (void)setHasFlowStep:(bool)arg1;
- (void)setHasMediaPlayerPlaybackContextTier1:(bool)arg1;
- (void)setHasMediaPlayerRadioStationContextTier1:(bool)arg1;
- (void)setHasPegasusContextTier1:(bool)arg1;
- (void)setHasSmsAttachmentMetadataTier1:(bool)arg1;
- (void)setMediaPlayerPlaybackContextTier1:(id)arg1;
- (void)setMediaPlayerRadioStationContextTier1:(id)arg1;
- (void)setPegasusContextTier1:(id)arg1;
- (void)setSmsAttachmentMetadataTier1:(id)arg1;
- (id)smsAttachmentMetadataTier1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEvent_Type;
- (void)writeTo:(id)arg1;

@end