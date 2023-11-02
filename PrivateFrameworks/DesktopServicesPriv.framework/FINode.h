
@interface FINode : NSObject <DOCNode, NSCopying>

@property (getter=isAnyParentTrashed, nonatomic, readonly) bool anyParentTrashed;
@property (nonatomic, readonly, copy) BRContainer *brContainer;
@property (nonatomic, readonly, copy) FINode *brContainerDocuments;
@property (nonatomic, readonly) FPProviderDomain *cachedDomain;
@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly, copy) UTType *contentType;
@property (nonatomic, readonly) NSObject *contentVersion;
@property (nonatomic, readonly) NSProgress *copyingProgress;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *dateForSortingByRecents;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *deepItemCount;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSDate *doc_creationDate;
@property (nonatomic, readonly) unsigned long long doc_folderIconType;
@property (nonatomic, readonly) bool doc_isCollaborationInvitation;
@property (nonatomic, readonly) bool doc_isSMBSharepoint;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly, copy) NSNumber *documentSize;
@property (nonatomic, readonly) NSString *domainDisplayName;
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) NSError *downloadingError;
@property (nonatomic, readonly) NSProgress *downloadingProgress;
@property (nonatomic, readonly) NSError *enumeratorError;
@property (getter=isExcludedFromSync, nonatomic, readonly) bool excludedFromSync;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned long long folderType;
@property (nonatomic, readonly, copy) FPProviderDomain *fpDomain;
@property (nonatomic, readonly, copy) FPItem *fpItem;
@property (nonatomic, readonly) FPItem *fpfs_fpItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) bool isActionable;
@property (nonatomic, readonly) bool isCloudItem;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) bool isExternalDownloadPlaceholder;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isPackage;
@property (nonatomic, readonly) bool isPending;
@property (nonatomic, readonly) bool isReadable;
@property (nonatomic, readonly) bool isRootItem;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isSharedByCurrentUser;
@property (nonatomic, readonly) bool isTopLevelSharedItem;
@property (nonatomic, readonly) bool isTrashed;
@property (nonatomic, readonly) bool isVisible;
@property (nonatomic, readonly) bool isWritable;
@property (nonatomic, readonly) NSArray *itemDecorations;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly, copy) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSURL *nodeURL;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly) FINode *parent;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (getter=isRecursivelyDownloaded, nonatomic, readonly) bool recursivelyDownloaded;
@property (nonatomic, readonly) bool requiresForcedSyncing;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFileSystemEnumeration;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly, copy) NSArray *tags;
@property (nonatomic, readonly) DOCNodeThumbnailIdentifier *thumbnailIdentifier;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUploaded, nonatomic, readonly) bool uploaded;
@property (getter=isUploading, nonatomic, readonly) bool uploading;
@property (nonatomic, readonly) NSError *uploadingError;
@property (nonatomic, readonly) NSProgress *uploadingProgress;

// Image: /System/Library/PrivateFrameworks/DesktopServicesPriv.framework/DesktopServicesPriv

+ (id)_allInstances;
+ (id)_allRootInstances;
+ (void)_forEachNodeDeep:(id /* block */)arg1;
+ (id)dataSeparatedICloudDefaultContainer;
+ (id)dataSeparatedICloudLibrariesContainer;
+ (int)desktopServicesAPIVersion;
+ (void)end;
+ (id)fiNodeFromURL:(id)arg1;
+ (id)iCloudDefaultContainer;
+ (id)iCloudLibrariesContainer;
+ (id)nodeFromNodeRef:(struct OpaqueNodeRef { }*)arg1;
+ (id)providerDomainsContainer;
+ (id)sizeFolder:(id)arg1;
+ (id)sizeFolder:(id)arg1 forCopyInto:(id)arg2 withDelegate:(id)arg3;
+ (void)start;

- (id)_debugChildren;
- (void)_forEachNodeDeep:(id /* block */)arg1;
- (id)_presentationNode;
- (id)_uiParent;
- (void*)asTNode;
- (id)brContainer;
- (id)brContainerDocuments;
- (id)childItemCount;
- (id)contentModificationDate;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)debugDescription;
- (id)displayName;
- (id)documentSize;
- (id)enumeratorError;
- (id)fetchLastUsedDate:(bool)arg1;
- (id)fetchTags:(bool)arg1;
- (id)fileName;
- (id)fileParent;
- (id)fileURL;
- (id)fpDomain;
- (id)fpItem;
- (struct shared_ptr<TFSInfo> { struct TFSInfo {} *x1; struct __shared_weak_count {} *x2; })fsInfo;
- (unsigned long long)hash;
- (void)inlineProgressCancel;
- (bool)isFolder;
- (bool)isPackage;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (bool)isVisible;
- (id)itemDecorations;
- (id)itemIdentifier;
- (id)lastUsedDate;
- (id)longDescription;
- (id)mutableCopy;
- (unsigned long long)nodeIs:(unsigned long long)arg1;
- (unsigned int)nodePermissions:(unsigned int)arg1;
- (struct OpaqueNodeRef { }*)nodeRef;
- (id)original;
- (id)ownerNameComponents;
- (id)parent;
- (id)propertyAsArray:(unsigned int)arg1;
- (bool)propertyAsBool:(unsigned int)arg1;
- (id)propertyAsDate:(unsigned int)arg1;
- (id)propertyAsDictionary:(unsigned int)arg1;
- (id)propertyAsNSObject:(unsigned int)arg1;
- (id)propertyAsNumber:(unsigned int)arg1;
- (id)propertyAsString:(unsigned int)arg1;
- (id)redactedDescription;
- (bool)requiresForcedSyncing;
- (id)source;
- (id)tags;
- (id)typeIdentifier;
- (unsigned int)volumeIs:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (long long)_doc_fileTypeCompare:(id)arg1;
- (id)cachedDomain;
- (id)contentVersion;
- (id)copyingProgress;
- (id)dateForSortingByRecents;
- (id)deepItemCount;
- (id)doc_creationDate;
- (unsigned long long)doc_folderIconType;
- (bool)doc_isCollaborationInvitation;
- (bool)doc_isSMBSharepoint;
- (id)doc_lastUsedDate;
- (id)domainDisplayName;
- (id)domainFromFileURL;
- (id)downloadingError;
- (id)downloadingProgress;
- (void)encodeNodeWithCoder:(id)arg1;
- (void)fetchFPItem:(id /* block */)arg1;
- (void)fetchParent:(id /* block */)arg1;
- (void)fetchParents:(id /* block */)arg1;
- (void)fetchURL:(id /* block */)arg1;
- (id)fileSize;
- (id)filename;
- (unsigned long long)folderType;
- (id)fpfs_fpItem;
- (id)identifier;
- (bool)isActionable;
- (bool)isAnyParentTrashed;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isExcludedFromSync;
- (bool)isExternalDownloadPlaceholder;
- (bool)isPending;
- (bool)isReadable;
- (bool)isRecursivelyDownloaded;
- (bool)isRootItem;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWritable;
- (long long)localizedStandardTagsCompareNode:(id)arg1;
- (id)modificationDate;
- (id)nodeURL;
- (id)providerDomainID;
- (id)providerID;
- (bool)supportsFileSystemEnumeration;
- (id)thumbnailIdentifier;
- (id)uploadingError;
- (id)uploadingProgress;

@end