
@interface TDCustomArtworkProduction : TDSimpleArtworkElementProduction {
    bool  _hasCustomDateOfLastChange;
}

@property (nonatomic) bool hasCustomDateOfLastChange;

- (bool)hasCustomDateOfLastChange;
- (void)setDateOfLastChange:(id)arg1;
- (void)setHasCustomDateOfLastChange:(bool)arg1;

@end