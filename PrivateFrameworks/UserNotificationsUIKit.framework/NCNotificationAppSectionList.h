
@interface NCNotificationAppSectionList : NCNotificationStructuredSectionList <MTVisualStylingRequiring, NCNotificationAppSectionListHeaderViewDelegate, NCNotificationAppSectionListSummarizedContentViewDelegate> {
    bool  _combinedAppSectionList;
    bool  _expanded;
    NSMutableArray * _featuredGroupLists;
    NCNotificationAppSectionListSummarizedContentView * _footerView;
    NCNotificationAppSectionListHeaderView * _headerView;
    bool  _merged;
    NSString * _preferredContentSizeCategory;
    NSMutableDictionary * _richContentProviders;
    NSString * _sectionIdentifier;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
}

@property (getter=isCombinedAppSectionList, nonatomic) bool combinedAppSectionList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) NSMutableArray *featuredGroupLists;
@property (nonatomic, retain) NSArray *groupListsForSmartOrdering;
@property (readonly) unsigned long long hash;
@property (getter=isMerged, nonatomic) bool merged;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) NSMutableDictionary *richContentProviders;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attachmentImageViewForSummaryForNotificationRequest:(id)arg1;
- (void)_clearContentProviderForRequest:(id)arg1;
- (void)_configureFooterViewIfNecessary;
- (void)_configureHeaderViewIfNecessary;
- (void)_configureSectionListView:(id)arg1;
- (id)_extractFeaturedNotificationRequestsFromGroupLists:(id)arg1;
- (unsigned long long)_insertionIndexForGroup:(id)arg1;
- (bool)_isViewFeaturedAtIndex:(unsigned long long)arg1;
- (void)_mergeFeaturedGroupLists;
- (id)_newAttachmentImageViewForImage:(id)arg1;
- (id)_newGroupListForNotificationRequest:(id)arg1;
- (id)_nonFeaturedGroupLists;
- (id)_notificationGroupsForInsertion;
- (void)_removeFeaturedGroupListIfNecessary:(id)arg1;
- (bool)_shouldFeatureLeadingViews;
- (bool)_shouldHideNotificationGroupList:(id)arg1;
- (bool)_shouldHideNotificationRequest:(id)arg1;
- (bool)_showSummarizedFooterView;
- (id)_summarizedAttachmentImageViews;
- (id)_summarizedContentStrings;
- (unsigned long long)_summarizedCount;
- (id)_summarizedStringsForNotificationRequest:(id)arg1;
- (void)_updateFeaturedGroupListsForFeaturedNotificationRequests:(id)arg1;
- (void)_updateSummarizedFooterViewContent;
- (bool)adjustForContentSizeCategoryChange;
- (void)appSectionListHeaderView:(id)arg1 didRequestPresentingOptionsMenuFromView:(id)arg2;
- (void)appSectionListSummarizedContentViewDidRecognizeTapGesture:(id)arg1;
- (id)backgroundGroupNameBaseForAppSectionListSummarizedContentView:(id)arg1;
- (void)clearAll;
- (id)featuredGroupLists;
- (id)footerViewForNotificationList:(id)arg1;
- (double)footerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;
- (id)groupListsForSmartOrdering;
- (id)headerViewForNotificationList:(id)arg1;
- (double)headerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;
- (id)initWithTitle:(id)arg1 sectionType:(unsigned long long)arg2;
- (void)insertNotificationRequest:(id)arg1;
- (bool)isAttachmentImageFeaturedForNotificationGroupList:(id)arg1;
- (bool)isCombinedAppSectionList;
- (bool)isExpanded;
- (bool)isMerged;
- (bool)isRichNotificationContentViewForNotificationGroupList:(id)arg1;
- (bool)isShowingFeaturedLeadingViewsForNotificationListView:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (id)notificationGroupList:(id)arg1 requestsContentProviderForNotificationRequest:(id)arg2;
- (void)notificationListBaseComponentDidRemoveAll:(id)arg1;
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;
- (void)notificationListPresentableGroup:(id)arg1 didReceivedHorizontalTranslation:(double)arg2;
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;
- (id)preferredContentSizeCategory;
- (void)removeNotificationRequest:(id)arg1;
- (id)requiredVisualStyleCategories;
- (id)richContentProviders;
- (id)sectionIdentifier;
- (void)setCombinedAppSectionList:(bool)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFeaturedGroupLists:(id)arg1;
- (void)setGroupListsForSmartOrdering:(id)arg1;
- (void)setMerged:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setRichContentProviders:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (bool)shouldAllowRestackingForNotificationListPresentableGroup:(id)arg1;
- (void)unmergeNotificationGroupListsIfNecessary;

@end