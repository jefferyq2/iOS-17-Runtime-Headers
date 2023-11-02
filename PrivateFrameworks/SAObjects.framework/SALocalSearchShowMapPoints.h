
@interface SALocalSearchShowMapPoints : SADomainCommand

@property (nonatomic, copy) NSDate *arrivalDate;
@property (nonatomic, retain) SALocalSearchCarRouteOptions *carRouteOptions;
@property (nonatomic) bool chainResultSet;
@property (nonatomic, copy) NSDate *departureDate;
@property (nonatomic, copy) NSString *directionsType;
@property (nonatomic, retain) SALocalSearchMapItem *itemDestination;
@property (nonatomic, retain) SALocalSearchMapItem *itemSource;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *preferredDirectionsMode;
@property (nonatomic, copy) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) bool searchAlongRoute;
@property (nonatomic, retain) SALocalSearchMapItemList *searchItems;
@property (nonatomic) bool showDirections;
@property (nonatomic) bool showTraffic;
@property (nonatomic) bool suppressNavigation;

+ (id)showMapPoints;
+ (id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2;

- (id)arrivalDate;
- (id)carRouteOptions;
- (bool)chainResultSet;
- (id)departureDate;
- (id)directionsType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)itemDestination;
- (id)itemSource;
- (id)language;
- (id)preferredDirectionsMode;
- (id)regionOfInterestRadiusInMiles;
- (bool)requiresResponse;
- (bool)searchAlongRoute;
- (id)searchItems;
- (void)setArrivalDate:(id)arg1;
- (void)setCarRouteOptions:(id)arg1;
- (void)setChainResultSet:(bool)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDirectionsType:(id)arg1;
- (void)setItemDestination:(id)arg1;
- (void)setItemSource:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPreferredDirectionsMode:(id)arg1;
- (void)setRegionOfInterestRadiusInMiles:(id)arg1;
- (void)setSearchAlongRoute:(bool)arg1;
- (void)setSearchItems:(id)arg1;
- (void)setShowDirections:(bool)arg1;
- (void)setShowTraffic:(bool)arg1;
- (void)setSuppressNavigation:(bool)arg1;
- (bool)showDirections;
- (bool)showTraffic;
- (bool)suppressNavigation;

@end