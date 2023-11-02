
@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding> {
    bool  _httpNonGet;
    bool  _loadSuccessful;
    WBSCloudHistoryVisit * _redirectDestinationVisit;
    WBSHistoryVisitIdentifier * _redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit * _redirectSourceVisit;
    WBSHistoryVisitIdentifier * _redirectSourceVisitIdentifier;
    NSString * _title;
    WBSHistoryVisitIdentifier * _visitIdentifier;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=wasHTTPNonGet, nonatomic) bool httpNonGet;
@property (getter=loadWasSuccessful, nonatomic) bool loadSuccessful;
@property (nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit;
@property (nonatomic, copy) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier;
@property (nonatomic) WBSCloudHistoryVisit *redirectSourceVisit;
@property (nonatomic, copy) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) WBSHistoryVisitIdentifier *visitIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHistoryVisit:(id)arg1;
- (id)initWithVisitIdentifier:(id)arg1 title:(id)arg2 loadSuccessful:(bool)arg3 httpNonGet:(bool)arg4 redirectSourceVisitIdentifier:(id)arg5 redirectDestinationVisitIdentifier:(id)arg6;
- (bool)loadWasSuccessful;
- (id)redirectDestinationVisit;
- (id)redirectDestinationVisitIdentifier;
- (id)redirectSourceVisit;
- (id)redirectSourceVisitIdentifier;
- (void)setHttpNonGet:(bool)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setRedirectDestinationVisit:(id)arg1;
- (void)setRedirectDestinationVisitIdentifier:(id)arg1;
- (void)setRedirectSourceVisit:(id)arg1;
- (void)setRedirectSourceVisitIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisitIdentifier:(id)arg1;
- (id)title;
- (id)visitIdentifier;
- (bool)wasHTTPNonGet;

@end