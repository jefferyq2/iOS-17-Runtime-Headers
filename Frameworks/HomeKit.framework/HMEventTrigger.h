
@interface HMEventTrigger : HMTrigger <HFTriggerProtocol, HMEventTriggerConfiguration, NSSecureCoding> {
    unsigned long long  _activationState;
    HMMutableArray * _currentEvents;
    bool  _executeOnce;
    NSPredicate * _internalPredicate;
    NSArray * _recurrences;
}

@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic) unsigned long long activationState;
@property (nonatomic, readonly, copy) NSArray *allEvents;
@property (nonatomic, readonly, copy) NSString *configuredName;
@property (nonatomic, retain) HMMutableArray *currentEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSArray *endEvents;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly) bool executeOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDurationEvent *hf_durationEndEvent;
@property (nonatomic, readonly) NSArray *hf_effectiveRecurrences;
@property (nonatomic, copy) NSPredicate *internalPredicate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) HMTriggerPolicy *policy;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSArray *recurrences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long triggerActivationState;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)__validateRecurrences:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)isActionAffectedByEndEvents:(id)arg1;
+ (id)negateOffset:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleAddEventFromResponse:(id)arg1 newEventPayload:(id)arg2;
- (void)_handleEventsRemovedFromResponse:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serializeForAdd;
- (void)_updateCharacteristicReference;
- (bool)_updateCharacteristicReferenceInNewEvent:(id)arg1;
- (void)_updateEvents:(id)arg1 endEvent:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateEventsFromResponse:(id)arg1 responsePayload:(id)arg2;
- (void)_updateExecuteOnce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_updatePredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)activationState;
- (void)addEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)allEvents;
- (bool)compatibleWithApp;
- (bool)containsSharedTriggerActivationBits;
- (id)copyAsBuilder;
- (id)currentEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)endEvents;
- (id)events;
- (bool)executeOnce;
- (void)handleActivationStateNotification:(id)arg1;
- (id)initInternalWithName:(id)arg1 configuredName:(id)arg2 events:(id)arg3 endEvents:(id)arg4 recurrences:(id)arg5 predicate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3;
- (id)internalPredicate;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergeFromNewObjectForBuilderUpdates:(id)arg1;
- (id)predicate;
- (id)recurrences;
- (void)removeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActivationState:(unsigned long long)arg1;
- (void)setCurrentEvents:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setInternalPredicate:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (unsigned long long)triggerActivationState;
- (void)updateEndEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateExecuteOnce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWithBuilder:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_alarmNaturalLanguageNameWithNameStringKey:(id)arg1 nameType:(unsigned long long)arg2 thresholdKey:(id)arg3 thresholdValueDescription:(id)arg4 roomName:(id)arg5 actionsDescription:(id)arg6;
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;
+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 nonSensorCharacteristics:(id)arg2 triggerValue:(id)arg3;
+ (id)_hf_naturalLanguageNameWithOptions:(id)arg1 sensorCharacteristics:(id)arg2 triggerValue:(id)arg3;
+ (id)_hf_triggerRangeKeyComponentForRangeType:(unsigned long long)arg1;
+ (bool)_hf_valueIsValidForCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)arg1;
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)arg1 conditions:(id)arg2 endEvents:(id)arg3 withOptions:(id)arg4;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 forUser:(id)arg3;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 events:(id)arg2 recurrences:(id)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 presenceEvent:(id)arg2;
+ (id)hf_naturalLanguageNameWithOptions:(id)arg1 region:(id)arg2 forUser:(id)arg3;
+ (id)hf_naturalLanguageTurnOffAfterDuration:(id)arg1 style:(unsigned long long)arg2;
+ (id)hf_newTriggerWithBuilder:(id)arg1 inHome:(id)arg2;
+ (id)hf_representativeTriggerValueForCharacteristic:(id)arg1 similarToValue:(id)arg2;
+ (unsigned long long)hf_triggerRangeTypeWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;
+ (id)hf_triggerRangeValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;
+ (id)hf_triggerValueNaturalLanguageDescriptionFormatterWithCharacteristics:(id)arg1;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValueRange:(id)arg2 thresholdValue:(id)arg3;

- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;
- (bool)hf_affectsCharacteristics:(id)arg1;
- (id)hf_characteristicsInEvents;
- (id)hf_copyAsBuilder;
- (id)hf_designateTrigger:(bool)arg1;
- (id)hf_durationEndEvent;
- (id)hf_effectiveRecurrences;
- (bool)hf_isHomeAppCreatedTrigger;
- (id)hf_markTriggerAsHomeAppCreated;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;
- (bool)hf_requiresConfirmationToRun;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (unsigned long long)hf_triggerType;
- (id)hf_unmarkTriggerAsHomeAppCreated;
- (id)hf_updateWithBuilder:(id)arg1;

@end