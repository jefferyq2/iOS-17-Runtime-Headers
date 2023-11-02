
@interface EKDebugPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (nonatomic) bool overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic, retain) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) bool overrideTravelAdvisoryHypothesis;
@property (nonatomic) bool performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) bool preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) bool saveGeocodedLocationsInTravelEngine;
@property (nonatomic) bool shouldBypassTravelEngineThrottle;
@property (nonatomic) bool showDepartureDateForTransitTimeToLeave;
@property (nonatomic) bool syntheticTravelAdvisoriesEnabled;
@property (nonatomic) bool verifyIntegrityOfAvailabilityTimeSearchTimelines;

+ (id)shared;

- (void).cxx_destruct;
- (double)availabilityFreshnessWindow;
- (bool)forceDisplayOfNewTravelAdvisoryHypotheses;
- (id)init;
- (double)overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
- (double)overriddenTravelAdvisoryHypothesisConservativeTravelTime;
- (id)overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
- (double)overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
- (id)overriddenTravelAdvisoryHypothesisRouteName;
- (bool)overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
- (id)overriddenTravelAdvisoryHypothesisTransportType;
- (id)overriddenTravelAdvisoryHypothesisTravelState;
- (bool)overrideTravelAdvisoryHypothesis;
- (bool)performAgendaEntryEqualityChecksInTravelEngine;
- (bool)preventMarkingTravelAdvisoryEntriesAsDismissed;
- (bool)saveGeocodedLocationsInTravelEngine;
- (void)setAvailabilityFreshnessWindow:(double)arg1;
- (void)setForceDisplayOfNewTravelAdvisoryHypotheses:(bool)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisAggressiveTravelTime:(double)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisConservativeTravelTime:(double)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisCurrentTrafficDensity:(id)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisEstimatedTravelTime:(double)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisRouteName:(id)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisSupportsLiveTraffic:(bool)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisTransportType:(id)arg1;
- (void)setOverriddenTravelAdvisoryHypothesisTravelState:(id)arg1;
- (void)setOverrideTravelAdvisoryHypothesis:(bool)arg1;
- (void)setPerformAgendaEntryEqualityChecksInTravelEngine:(bool)arg1;
- (void)setPreventMarkingTravelAdvisoryEntriesAsDismissed:(bool)arg1;
- (void)setSaveGeocodedLocationsInTravelEngine:(bool)arg1;
- (void)setShouldBypassTravelEngineThrottle:(bool)arg1;
- (void)setShowDepartureDateForTransitTimeToLeave:(bool)arg1;
- (void)setSyntheticTravelAdvisoriesEnabled:(bool)arg1;
- (void)setVerifyIntegrityOfAvailabilityTimeSearchTimelines:(bool)arg1;
- (bool)shouldBypassTravelEngineThrottle;
- (bool)showDepartureDateForTransitTimeToLeave;
- (bool)syntheticTravelAdvisoriesEnabled;
- (bool)verifyIntegrityOfAvailabilityTimeSearchTimelines;

@end