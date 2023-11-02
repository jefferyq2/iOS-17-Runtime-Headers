
@interface RadioAddStationRequest : RadioSyncRequest {
    NSDictionary * _matchDictionary;
    long long  _persistentID;
    NSMutableDictionary * _stationDictionary;
    NSString * _stationHashForSkipHistoryCopying;
}

- (void).cxx_destruct;
- (id)changeList;
- (id)init;
- (id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(bool)arg2;
- (id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2;
- (id)initWithRadioTrackDictionary:(id)arg1 useArtist:(bool)arg2;
- (id)initWithStation:(id)arg1;
- (id)initWithStationDictionary:(id)arg1;
- (id)matchDictionary;
- (void)startWithAddStationCompletionHandler:(id /* block */)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end