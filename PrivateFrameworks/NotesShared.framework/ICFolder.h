
@interface ICFolder : ICNoteContainer <ICCloudObject, ICFolderObject>

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, readonly) NSArray *ancestorFolderObjectIDs;
@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSDate *customNoteSortTypeModificationDate;
@property (nonatomic, retain) NSNumber *customNoteSortTypeValue;
@property (nonatomic, retain) NSDate *dateForLastTitleModification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *filledSystemImageName;
@property (nonatomic) short folderType;
@property (nonatomic, readonly) NSArray *foldersInFolder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifierURIPathComponent;
@property (nonatomic) bool importedFromLegacy;
@property (nonatomic, readonly) bool isDefaultFolderForAccount;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic, retain) NSData *mergeableData;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) ICFolder *parent;
@property (nonatomic, retain) NSDate *parentModificationDate;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly, copy) NSString *smartFolderDescription;
@property (nonatomic, readonly) NSString *smartFolderDescriptionObjC;
@property (nonatomic, retain) ICQuery *smartFolderQuery;
@property (nonatomic, copy) NSString *smartFolderQueryJSON;
@property (nonatomic, retain) ICQueryObjC *smartFolderQueryObjC;
@property (nonatomic, readonly, copy) NSString *smartFolderShortDescription;
@property (nonatomic, readonly) NSString *smartFolderShortDescriptionObjC;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) NSArray *visibleNotesInFolder;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allFoldersInContext:(id)arg1;
+ (id)ancestorFolderPredicatesWithBlock:(id /* block */)arg1;
+ (id)contentInfoTextWithNoteCount:(long long)arg1 subfolderCount:(long long)arg2;
+ (unsigned long long)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)deduplicatingTitle:(id)arg1 account:(id)arg2;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 forNewFolderParent:(id)arg3 ofAccount:(id)arg4;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3;
+ (id)defaultFolderInContext:(id)arg1;
+ (id)defaultSmartFolderTitleWithComponents:(id)arg1;
+ (void)deleteFolder:(id)arg1;
+ (id)englishTitleForDefaultFolder;
+ (id)englishTitleForSystemPaperFolder;
+ (id)englishTitleForTrashFolder;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (unsigned long long)folderDepthLimit;
+ (id)folderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)foldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (bool)isTitleValid:(id)arg1 account:(id)arg2 folder:(id)arg3 parentFolder:(id)arg4 error:(out id*)arg5;
+ (bool)isTitleValid:(id)arg1 account:(id)arg2 parentFolder:(id)arg3 error:(out id*)arg4;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCustomNoteSortType;
+ (id)keyPathsForValuesAffectingDepth;
+ (id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+ (id)keyPathsForValuesAffectingIsLeaf;
+ (id)keyPathsForValuesAffectingIsTrashFolder;
+ (id)keyPathsForValuesAffectingSupportsCustomNoteSortType;
+ (id)keyPathsForValuesAffectingSupportsEditingNotes;
+ (id)keyPathsForValuesAffectingTitleForTableViewCell;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;
+ (id)localizedNewFolderName;
+ (id)localizedTitleForDefaultFolder;
+ (id)localizedTitleForSystemPaperFolder;
+ (id)localizedTitleForTrashFolder;
+ (unsigned long long)maximumDepthOfFolders:(id)arg1;
+ (unsigned long long)maximumDistanceToLeafFolderOfFolders:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newFolderInAccount:(id)arg1;
+ (id)newFolderInParentFolder:(id)arg1;
+ (id)newFolderWithIdentifier:(id)arg1 account:(id)arg2;
+ (id)newFolderWithIdentifier:(id)arg1 account:(id)arg2 query:(id)arg3;
+ (id)newFolderWithIdentifier:(id)arg1 parentFolder:(id)arg2;
+ (id)newPlaceholderObjectForRecordName:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)objc_defaultSmartFolderTitleWithComponents:(id)arg1;
+ (id)objc_smartFolderWithQuery:(id)arg1 account:(id)arg2;
+ (id)objc_smartFolderWithQuery:(id)arg1 titleComponents:(id)arg2 account:(id)arg3;
+ (id)predicateForDeprecatedObjects;
+ (id)predicateForFoldersInFolder:(id)arg1;
+ (id)predicateForNotesInFolder:(id)arg1;
+ (id)predicateForVisibleCustomFolders;
+ (id)predicateForVisibleFoldersInContext:(id)arg1;
+ (id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(bool)arg1 inContext:(id)arg2;
+ (id)predicateForVisibleObjects;
+ (id)purgableFoldersFetchRequest;
+ (void)purgeFolder:(id)arg1;
+ (id)reservedFolderTitles;
+ (id)rootSharingFolderForNote:(id)arg1;
+ (id)shareType;
+ (id)smartFolderWithQuery:(id)arg1 account:(id)arg2;
+ (id)smartFolderWithQuery:(id)arg1 titleComponents:(id)arg2 account:(id)arg3;
+ (id)stringByScrubbingStringForFolderName:(id)arg1;
+ (bool)supportsActivityEvents;
+ (bool)supportsUserSpecificRecords;
+ (id)visibleFoldersInContext:(id)arg1;
+ (id)visibleSmartFoldersForHashtagStandardizedContent:(id)arg1 account:(id)arg2;

- (id)accountName;
- (bool)allowsExporting;
- (bool)allowsImporting;
- (id)ancestorFolderObjectIDs;
- (id)associatedNoteParticipants;
- (void)awakeFromFetch;
- (id)cacheKey;
- (bool)canAddSubfolder;
- (bool)canBeRootShareObject;
- (bool)canBeSharedViaICloud;
- (bool)canMoveAddOrDeleteContents;
- (id)childCloudObjects;
- (long long)compare:(id)arg1;
- (id)containerIdentifier;
- (bool)containsSharedDescendantFolders;
- (bool)containsSharedDescendantFolders:(bool*)arg1;
- (bool)containsSharedNotesOrSharedDescendantFolders;
- (bool)containsSharedNotesOrSharedDescendantFolders:(bool*)arg1;
- (unsigned long long)countOfVisibleNotesInFolder;
- (id)customNoteSortType;
- (void)deleteFromLocalDatabase;
- (unsigned long long)depth;
- (void)fixBrokenReferences;
- (id)foldersInFolder;
- (bool)hasAllMandatoryFields;
- (bool)hasSharedContentsNotSharedViaSharedFolder:(id)arg1;
- (id)ic_loggingValues;
- (id)identifierURIPathComponent;
- (unsigned long long)indexOfVisibleChild:(id)arg1;
- (long long)intrinsicNotesVersionForScenario:(unsigned long long)arg1;
- (bool)isAncestorOfFolder:(id)arg1;
- (bool)isDefaultFolderForAccount;
- (bool)isDefaultFolderOrDescendantOfDefaultFolder;
- (bool)isDeletable;
- (bool)isDeprecated;
- (bool)isDescendantOfFolder:(id)arg1;
- (bool)isEditableSmartFolder;
- (bool)isInICloudAccount;
- (bool)isLeaf;
- (bool)isModernCustomFolder;
- (bool)isMovable;
- (bool)isRenamable;
- (bool)isSharedViaSharedFolder:(id)arg1;
- (bool)isShowingDateHeaders;
- (bool)isSmartFolder;
- (bool)isSubfolderOfReadonlyFolder;
- (bool)isSystemFolder;
- (bool)isTitleValid:(id)arg1 error:(out id*)arg2;
- (bool)isTrashFolder;
- (id)localizedTitle;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (id)makeUserSpecificCloudKitRecordForApproach:(long long)arg1;
- (void)markForDeletion;
- (unsigned long long)maximumDepthIncludingChildFolders;
- (unsigned long long)maximumDistanceToLeafFolder;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (bool)mergeDataFromUserSpecificRecord:(id)arg1 accountID:(id)arg2;
- (void)mergeParentFromRecord:(id)arg1;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentCloudObjectModificationDate;
- (id)pinnedNotesInFolder;
- (id)predicateForAttachmentsInFolder;
- (id)predicateForFoldersInFolder;
- (id)predicateForNotesInFolder;
- (id)predicateForPinnedNotes;
- (id)predicateForPinnedNotesInFolder;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleAttachmentsInFolder;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesInFolder;
- (id)recordType;
- (id)recordZoneName;
- (id)recursiveVisibleSubfolders;
- (void)recursivelyAddSubfoldersToArray:(id)arg1;
- (id)rootSharedFoldersInDescendantsIncludingSelf;
- (id)rootSharedNotesIncludingChildFolders;
- (id)rootSharingFolder;
- (void)saveMergeableDataIfNeeded;
- (void)setAccount:(id)arg1;
- (void)setCustomNoteSortType:(id)arg1;
- (void)setFolderType:(short)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setNeedsInitialFetchFromCloud:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setSmartFolderQuery:(id)arg1;
- (void)setSmartFolderQueryJSON:(id)arg1;
- (void)setSmartFolderQueryObjC:(id)arg1;
- (void)setSubFolderOrderMergeableData:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shareTitle;
- (id)shareType;
- (bool)shouldSyncMinimumSupportedNotesVersion;
- (id)smartFolderDescription;
- (id)smartFolderDescriptionObjC;
- (id)smartFolderQuery;
- (id)smartFolderQueryObjC;
- (id)smartFolderShortDescription;
- (id)smartFolderShortDescriptionObjC;
- (id)subFolderOrderMergeableData;
- (bool)supportsCustomNoteSortType;
- (bool)supportsDateHeaders;
- (bool)supportsEditingNotes;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)unmarkForDeletionIncludingParentHierarchy;
- (void)updateChangeCountWithReason:(id)arg1;
- (void)updateSortOrder;
- (bool)validate;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (bool)visibleChildFoldersContainsFolderWithTitle:(id)arg1;
- (id)visibleNoteContainerChildren;
- (unsigned long long)visibleNoteContainerChildrenCount;
- (id)visibleNoteContainerChildrenUnsorted;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotesInFolder;
- (id)visibleNotesIncludingChildFolders;
- (id)visibleSubFolders;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)defaultFilledSystemImageName;
+ (id)defaultNavigationBarIcon;
+ (id)defaultSystemImageName;
+ (id)foldersWithHashtagAsOnlyFilter:(id)arg1;
+ (void)removeUsageOfHashtag:(id)arg1;
+ (id)smartFoldersThatWillBeDeletedAfterDeletingHashtags:(id)arg1;

- (id)filledSystemImageName;
- (id)navigationBarIconOverlaySystemImage;
- (id)navigationBarIconWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)systemImageName;

@end