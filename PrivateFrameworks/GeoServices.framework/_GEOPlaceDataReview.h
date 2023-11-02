
@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {
    GEOPDPlace * _placeData;
    GEOPDReview * _review;
}

@property (getter=_date, nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly) NSString *identifier;
@property (getter=_localizedSnippet, nonatomic, readonly) NSString *localizedSnippet;
@property (getter=_localizedSnippetLocale, nonatomic, readonly) NSString *localizedSnippetLocale;
@property (getter=_maxScore, nonatomic, readonly) double maxScore;
@property (getter=_normalizedScore, nonatomic, readonly) double normalizedScore;
@property (getter=_reviewerImageURLString, nonatomic, readonly) NSString *reviewerImageURLString;
@property (getter=_reviewerName, nonatomic, readonly) NSString *reviewerName;
@property (getter=_score, nonatomic, readonly) double score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_date;
- (id)_identifier;
- (id)_localizedSnippet;
- (id)_localizedSnippetLocale;
- (double)_maxScore;
- (double)_normalizedScore;
- (id)_reviewerImageURLString;
- (id)_reviewerName;
- (double)_score;
- (id)initWithPlaceData:(id)arg1 review:(id)arg2;

@end