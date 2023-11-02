
@interface GEOQuickETARequest : NSObject {
    NSArray * _additionalTransportTypesRequested;
    NSDate * _arrivalDate;
    GEOAutomobileOptions * _automobileOptions;
    GEOLocation * _currentLocation;
    GEOCyclingOptions * _cyclingOptions;
    NSDate * _departureDate;
    GEOComposedWaypoint * _destinationWaypoint;
    bool  _includeDistance;
    NSString * _requestingAppIdentifier;
    GEOComposedWaypoint * _sourceWaypoint;
    GEOTransitOptions * _transitOptions;
    int  _transportType;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) NSArray *additionalTransportTypesRequested;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readonly) GEOLocation *currentLocation;
@property (nonatomic, readonly) GEOCyclingOptions *cyclingOptions;
@property (nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) GEOComposedWaypoint *destinationWaypoint;
@property (nonatomic, readonly) bool includeDistance;
@property (nonatomic, retain) NSString *requestingAppIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *sourceWaypoint;
@property (nonatomic, readonly) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) GEOWalkingOptions *walkingOptions;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)_defaultRequestingAppIdentifier;
- (id)additionalTransportTypesRequested;
- (id)arrivalDate;
- (id)automobileOptions;
- (id)currentLocation;
- (id)cyclingOptions;
- (id)departureDate;
- (id)description;
- (id)destinationWaypoint;
- (bool)includeDistance;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(bool)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 cyclingOptions:(id)arg9;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 cyclingOptions:(id)arg11;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(bool)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 cyclingOptions:(id)arg9;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(bool)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 cyclingOptions:(id)arg11;
- (id)requestingAppIdentifier;
- (void)setRequestingAppIdentifier:(id)arg1;
- (id)sourceWaypoint;
- (id)transitOptions;
- (int)transportType;
- (id)walkingOptions;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 automobileOptions:(id)arg4;

@end