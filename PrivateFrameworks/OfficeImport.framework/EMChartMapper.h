
@interface EMChartMapper : CMMapper {
    CHDAxis * mBaseAxis;
    CHDChart * mChart;
    bool  mHasDateCategory;
    bool  mHasPrimaryDateAxis;
    bool  mHasSecondaryDateAxis;
    bool  mIsHorizontal;
    bool  mIsPercentStacked;
    bool  mIsStacked;
    CHDSeries * mMainSeries;
    CHDChartType * mMainType;
    unsigned long long  mPieIndex;
    struct { 
        bool primaryCategoryHasDates; 
        bool secondaryCategoryHasDates; 
        bool primaryAxisHasDates; 
        bool secondaryAxisHasDates; 
    }  mPlotInfos;
    CHDAxis * mPrimaryAxis;
    EDResources * mResources;
    CHDAxis * mSecondaryAxis;
    CMState * mState;
}

@property (readonly) CMDrawableMapper *parent;

+ (struct CGColor { }*)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (void).cxx_destruct;
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;
- (void)addLegendToDescription:(id)arg1 chartSize:(struct CGSize { double x1; double x2; })arg2 withState:(id)arg3;
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;
- (id)copyPdfWithState:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)dateFromXlDateTimeNumber:(double)arg1;
- (id)initWithChart:(id)arg1 parent:(id)arg2;

@end