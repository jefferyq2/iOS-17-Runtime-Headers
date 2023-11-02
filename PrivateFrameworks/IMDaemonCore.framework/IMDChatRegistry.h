
@interface IMDChatRegistry : NSObject <IMUnlockMonitorListener, TUConversationManagerDelegate> {
    bool  _blackholedChatsExistCache;
    NSMutableDictionary * _cachedAliasToCNIDMap;
    IMDChatStore * _chatStore;
    NSMutableDictionary * _chats;
    NSMutableDictionary * _chatsByGroupID;
    NSRecursiveLock * _chatsLock;
    IMDCKUtilities * _ckUtilities;
    TUConversationManager * _conversationManager;
    bool  _doneLoadingAfterMerge;
    bool  _firstUnlockTriggered;
    NSRecursiveLock * _handlesLock;
    bool  _hasDumpedLogsForNoExisitingGroup;
    NSData * _historyToken;
    NSMutableDictionary * _idToHandlesMap;
    bool  _isLoading;
    IMDMessageHistorySyncController * _messageHistorySyncController;
    IMDMessageProcessingController * _messageProcessingController;
    unsigned long long  _persistedChatCount;
    NSMutableDictionary * _personCentricGroupedChatsCache;
}

@property (nonatomic, readonly) NSArray *allChats;
@property (nonatomic, retain) NSMutableDictionary *cachedAliasToCNIDMap;
@property (nonatomic, readonly) unsigned long long cachedChatCount;
@property (nonatomic, readonly) NSArray *cachedChats;
@property (nonatomic, retain) IMDChatStore *chatStore;
@property (nonatomic, readonly) NSArray *chats;
@property (nonatomic, retain) IMDCKUtilities *ckUtilities;
@property (nonatomic, readonly) TUConversationManager *conversationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDumpedLogsForNoExisitingGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *historyToken;
@property (nonatomic, retain) NSMutableDictionary *idToHandlesMap;
@property (nonatomic, readonly) IMDMessageHistorySyncController *messageHistorySyncController;
@property (nonatomic, readonly) IMDMessageProcessingController *messageProcessingController;
@property (nonatomic, readonly) unsigned long long persistedChatCount;
@property (nonatomic, retain) NSMutableDictionary *personCentricGroupedChatsCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)supportedServiceNames;

- (void).cxx_destruct;
- (void)__addChatToGroupIDChatIndex:(id)arg1;
- (void)__removeChatFromGroupIDChatIndex:(id)arg1;
- (id)_activeTUConversations;
- (id)_addChatFromCacheMiss:(id)arg1 preferExistingChat:(bool)arg2;
- (id)_addChatsFromCacheMisses:(id)arg1 preferExistingChats:(bool)arg2;
- (void)_addItemToParentChatIfNotLocationItem:(id)arg1 parentChat:(id)arg2 updatedLastMessageCount:(unsigned long long)arg3;
- (void)_adoptUpdatedStateForExistingItem:(id)arg1 itemFromCKRecord:(id)arg2;
- (id)_aliasToCNIDMapForAliases:(id)arg1;
- (id)_allChatInfo;
- (id)_allHandles;
- (id)_blackholedChatInfoForNumberOfChats:(long long)arg1;
- (id)_cachedChatWithGUID:(id)arg1;
- (id)_cachedChatsWithGroupID:(id)arg1;
- (bool)_chat:(id)arg1 isDuplicateOfChat:(id)arg2;
- (id)_chatForTUConversation:(id)arg1;
- (id)_chatForTUGroupID:(id)arg1 participants:(id)arg2;
- (id)_chatGUIDToChatMapForChats:(id)arg1;
- (void)_chatGUIDsThatNeedRemerging:(id*)arg1 chatDictionaryArray:(id*)arg2 aliasMap:(id)arg3;
- (void)_chatGUIDsThatNeedRemerging:(id*)arg1 chatDictionaryArray:(id*)arg2 oldPersonCentricID:(id)arg3;
- (void)_chatGUIDsThatNeedRemergingWithCompletionHandler:(id /* block */)arg1;
- (id)_chatInfoForChats:(id)arg1;
- (id)_chatInfoForConnection;
- (id)_chatInfoForNumberOfChats:(long long)arg1;
- (id)_chatInfoInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 wantsBlackholed:(bool)arg2;
- (id)_chatsWithBlackholed:(bool)arg1;
- (void)_checkForContactChanges;
- (bool)_contactsBasedMerginEnabled;
- (void)_contactsChanged:(id)arg1;
- (id)_conversationItemForChat:(id)arg1 conversation:(id)arg2;
- (id)_createGroupChatForConversation:(id)arg1 onSession:(id)arg2;
- (id)_createGroupChatsArray;
- (bool)_ensureNoExistingGroupForSyncData:(id)arg1;
- (void)_enumeratePersonMergedChatsWithMaximumNumberOfChats:(long long)arg1 usingChats:(id)arg2 useCachedChatGroups:(bool)arg3 includingPinnedChatIdentifiers:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)_evictCachedChat:(id)arg1;
- (id)_exactGroupChatMatchOrNewestMatchingGroupID:(id)arg1 serviceName:(id)arg2 participants:(id)arg3 toIdentifier:(id)arg4;
- (id)_existingChatForSyncData:(id)arg1 originalGUID:(id)arg2;
- (id)_existingChatsForIDs:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (bool)_existingItemRequiresUpgrade:(id)arg1 itemFromCKRecord:(id)arg2;
- (id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)_extractHandlesFromMap:(id)arg1 usingCNID:(id)arg2;
- (void)_finalizeIncomingChat:(id)arg1;
- (id)_findChatWinnerInDuplicateChatArray:(id)arg1 fixDisplayName:(bool*)arg2;
- (id)_findExistingGroupChatForConversation:(id)arg1 onSession:(id)arg2;
- (id)_findLosingChatGUIDsInArrayOfChats:(id)arg1 withWinner:(id)arg2;
- (void)_fixSMSGroupChatAndStoreIfNeeded:(id)arg1 iMessageChat:(id)arg2 chatToRegenerate:(id*)arg3;
- (void)_fixUpChatParticipantsIfNeeded:(id)arg1;
- (void)_fixUpChatParticipantsIfNeeded:(id)arg1 usingChatGUIDToChatMap:(id)arg2;
- (void)_forceReloadChats:(bool)arg1;
- (id)_generateCurrentAliasToCNIDDictionary;
- (id)_handlesWithChangedContactsOriginalMap:(id)arg1 newMap:(id)arg2;
- (bool)_hasInconsistentGroupPhotoGUIDAcrossMergedChats:(id)arg1;
- (bool)_hasInconsistentJoinStateAcrossMergedChats:(id)arg1;
- (id)_initiatorForConversation:(id)arg1 chat:(id)arg2;
- (void)_insertChatUsingSyncData:(id)arg1;
- (id)_itemFromCKRecord:(id)arg1;
- (id)_lookupChatUsingParentChatID:(id)arg1 service:(id)arg2;
- (void)_makeAllAttachmentsClassC;
- (void)_markForksAsSyncedForChat:(id)arg1;
- (void)_markGroupPhotosAsUnpurgeableIfNecessary;
- (bool)_mergeDuplicateGroupsIfNeeded;
- (id)_mergedPinningIdentifiersForChats:(id)arg1 chatGUIDToChatMap:(id)arg2 groupedChatsByPersonCentricIdWithSortedChats:(id)arg3;
- (id)_messageStore;
- (id)_newestExistingChatWithGroupID:(id)arg1 onService:(id)arg2;
- (id)_newestExistingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (id)_newestGroupChatMatchingParticipants:(id)arg1 displayName:(id)arg2 strictDisplayNameMatching:(bool)arg3 serviceName:(id)arg4 toIdentifier:(id)arg5;
- (id)_oneToOneChatForRemoteHandle:(id)arg1;
- (id)_parentChatIDFromCKRecord:(id)arg1;
- (id)_participantIDSetFromHandles:(id)arg1 toIdentifier:(id)arg2;
- (void)_performPostUnlockHousekeeping;
- (void)_persistMergeIDMergedChatsIfNeeded;
- (void)_populateContactIDOnHandles;
- (void)_populateLastMessageForChat:(id)arg1;
- (id)_preferredFileTransferFromGroupPhotoGUIDs:(id)arg1;
- (void)_reloadChatsForDatabaseMergeOrDatabaseSwitch;
- (void)_repairInconsistentGroupPhotoGuidAcrossMergedChatsIfNecessary:(id)arg1;
- (void)_repairInconsistentJoinStatesAcrossMergedChatsIfNecessary:(id)arg1;
- (void)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 isJunkReportedToCarrier:(bool)arg8 iMessageReportSpamDictionaries:(id)arg9 textMessageReportSpamDictionaries:(id)arg10;
- (void)_reportMessageDictionaryForMessages:(id)arg1 withLastAddressedHandle:(id)arg2 maxMessageLength:(unsigned long long)arg3 isAutoReport:(bool)arg4 withChat:(id)arg5 maxMessagesToReport:(unsigned long long)arg6 totalMessageCount:(unsigned long long*)arg7 notifyInternalSecurity:(bool)arg8 isJunkReportedToCarrier:(bool)arg9 iMessageReportSpamDictionaries:(id)arg10 textMessageReportSpamDictionaries:(id)arg11;
- (void)_reportToIDSTextMessageSpam:(id)arg1;
- (void)_reportToIDSiMessageSpam:(id)arg1;
- (void)_serializeChatsForRemerge:(id)arg1 guidsThatNeedRemerging:(id*)arg2 chatDictionaryArray:(id*)arg3;
- (void)_setGroupID:(id)arg1 forChatAndAllSiblings:(id)arg2;
- (void)_setInitialLoadForTesting:(bool)arg1;
- (void)_setSortIDOnIncomingMessage:(id)arg1 forChat:(id)arg2;
- (id)_sharedMessageStore;
- (bool)_shouldHandleInternalPhishingAttempts;
- (id)_siblingChatForChat:(id)arg1 usingChatGUIDToChatMap:(id)arg2;
- (id)_spamMessageCreator;
- (void)_triggerRemergeForPersonCentricID:(id)arg1;
- (id)_tuConversationForChat:(id)arg1;
- (void)_updateCachedAliasToCNIDMap:(id)arg1 withHistoryToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateCachedCNIDMapForHandles:(id)arg1;
- (void)_updateChat:(id)arg1 usingSyncData:(id)arg2;
- (void)_updateCurrentAliasToCNIDDictionaryAndHistoryTokenWithCompletionHandler:(id /* block */)arg1;
- (id)_upgradeChatToGroupChat:(id)arg1 forConversation:(id)arg2;
- (void)addChat:(id)arg1;
- (void)addChat:(id)arg1 firstLoad:(bool)arg2 store:(bool)arg3;
- (void)addIMDHandleToRegistry:(id)arg1;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(bool)arg3;
- (id)aliasToCNIDMap;
- (id)allChats;
- (id)allChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2 serviceNames:(id)arg3;
- (id)allExistingChatsWithIdentifier:(id)arg1;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)allExistingSupportedServiceChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)allHandlesForID:(id)arg1;
- (id)bestCandidateGroupChatWithFromIdentifier:(id)arg1 toIdentifier:(id)arg2 displayName:(id)arg3 participants:(id)arg4 groupID:(id)arg5 serviceName:(id)arg6;
- (id)blackholedChats;
- (bool)blackholedChatsExist;
- (id)cachedAliasToCNIDMap;
- (unsigned long long)cachedChatCount;
- (id)cachedChats;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4 lastAddressedHandle:(id)arg5 lastAddressedSIMID:(id)arg6 isBlackholed:(bool)arg7;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7 lastAddressedHandle:(id)arg8 lastAddressedSIMID:(id)arg9 isBlackholed:(bool)arg10;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatStore;
- (id)chats;
- (id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (void)checkBlackholedChatsExistAfterUpdatingChatWithAdd:(bool)arg1;
- (id)ckUtilities;
- (void)clearPendingDeleteTable;
- (void)clearRecoverableMessageTombStones;
- (id)conversationManager;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedMembersLocally:(id)arg3;
- (id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
- (void)dealloc;
- (bool)doneLoadingAfterMerge;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatWithEngramID:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatsFilteredUsingPredicate:(id)arg1;
- (id)existingChatsFilteredUsingPredicate:(id)arg1 sortedUsingLastMessageDateAscending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)existingChatsFilteredUsingPredicate:(id)arg1 sortedUsingLastMessageDateAscending:(bool)arg2 olderThan:(id)arg3 limit:(unsigned long long)arg4;
- (id)existingChatsForIDs:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatsWithGroupID:(id)arg1;
- (id)existingChatsWithPinningIdentifier:(id)arg1;
- (id)existingGroupChatsContainingHandles:(id)arg1;
- (id)existingOneOnOneChatsWithIdentifiers:(id)arg1;
- (id)existingSMSChatForID:(id)arg1;
- (id)existingSMSChatForID:(id)arg1 withChatStyle:(unsigned char)arg2;
- (id)existingiMessageChatForID:(id)arg1;
- (id)existingiMessageChatForID:(id)arg1 withChatStyle:(unsigned char)arg2;
- (bool)filterediMessageChatsExist;
- (id)findDuplicateChats:(id)arg1;
- (id)findDuplicateUnnamedGroups:(id)arg1;
- (id)generateUnusedChatIdentifierForGroupChatWithAccount:(id)arg1;
- (id)groupChatsBasedOnIdentity:(id)arg1;
- (id)groupChatsBasedOnIdentityUsingCacheIfApplicable:(id)arg1;
- (bool)handleMessageUpdate:(id)arg1;
- (void)handleMessageUpdateConflictType:(id)arg1 serverRecord:(id)arg2 localRowID:(long long)arg3;
- (bool)hasDumpedLogsForNoExisitingGroup;
- (bool)hasKnownSenderChatWithChatIdentifier:(id)arg1;
- (id)historyToken;
- (id)idToHandlesMap;
- (id)init;
- (void)invalidatePersonCentricGroupedChatsCache;
- (bool)isBeingSetup;
- (bool)loadChatsWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 autoReport:(bool)arg6;
- (unsigned long long)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 autoReport:(bool)arg6 isJunkReportedToCarrier:(bool)arg7;
- (void)markChatAsDeferredForSyncingUsingSyncData:(id)arg1;
- (void)markDeferredChatsAsNeedingSync;
- (id)messageHistorySyncController;
- (id)messageProcessingController;
- (id)messagesPendingUpdateT1ToCloudKitWithLimit:(unsigned long long)arg1;
- (id)messagesPendingUpdateT2ToCloudKitWithLimit:(unsigned long long)arg1;
- (id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (void)moveMessagesInChatsWithGUIDsToRecentlyDeleted:(id)arg1 deleteDate:(id)arg2;
- (void)moveMessagesWithGUIDsToRecentlyDeleted:(id)arg1 deleteDate:(id)arg2;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)persistedChatCount;
- (id)personCentricGroupedChatsArrayWithMaximumNumberOfChats:(long long)arg1 skipsLastMessageLoading:(bool)arg2 usingChats:(id)arg3 useCachedChatGroups:(bool)arg4 includingPinnedChatIdentifiers:(id)arg5 repairInconsistentMergedChats:(bool)arg6;
- (id)personCentricGroupedChatsCache;
- (void)processMessageUsingCKRecord:(id)arg1;
- (void)processMessageUsingCKRecord:(id)arg1 updatedLastMessageCount:(int)arg2;
- (void)recoverMessagesWithChatGUIDs:(id)arg1;
- (id)recoverableMessagesMetadata;
- (id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(unsigned long long)arg1;
- (id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(unsigned long long)arg1;
- (void)refreshUIWhileSyncing;
- (void)removeChat:(id)arg1;
- (void)removeIMDHandleFromRegistry:(id)arg1;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (bool)repairDuplicateChatsIfNeeded;
- (void)repairInconsistentMergedChatsIfNecessary:(id)arg1;
- (void)resolveChatConflictUsingSyncData:(id)arg1 localGUID:(id)arg2;
- (void)setCachedAliasToCNIDMap:(id)arg1;
- (void)setChatStore:(id)arg1;
- (void)setCkUtilities:(id)arg1;
- (void)setHasDumpedLogsForNoExisitingGroup:(bool)arg1;
- (void)setHistoryToken:(id)arg1;
- (void)setIdToHandlesMap:(id)arg1;
- (void)setPersonCentricGroupedChatsCache:(id)arg1;
- (void)setUpInitialConversationManager;
- (void)simulateMessageReceive:(id)arg1 serviceName:(id)arg2 groupID:(id)arg3 handles:(id)arg4 sender:(id)arg5 date:(id)arg6 associatedMessageType:(long long)arg7 associatedMessageGuid:(id)arg8;
- (id)sortPersonCentricChatGroups:(id)arg1;
- (id)stringForChatStyle:(unsigned char)arg1;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemDidUnlock;
- (id)truncatedSortedChatsGroupedByPersonCentricID:(id)arg1 count:(long long)arg2 pinnedChatIdentifiers:(id)arg3;
- (void)updateCachedChatsSyncStatusTo:(long long)arg1 forGUIDs:(id)arg2;
- (void)updateChatUsingSyncData:(id)arg1;
- (void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 recordID:(id)arg3;
- (void)updateFaceTimeGroupName:(id)arg1;
- (void)updateFaceTimeGroupPhoto:(id)arg1;
- (void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2 historyQuery:(bool)arg3;
- (void)updateMeCardHasUpdatedForAllChats;
- (void)updateNotificationUnreadCountForChat:(id)arg1;
- (bool)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)updateRecoverableMessageSyncState:(long long)arg1 forMessageRowID:(long long)arg2 onPartIndex:(long long)arg3;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2 shouldRebuildFailedMessageDate:(bool)arg3;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2 shouldRebuildFailedMessageDate:(bool)arg3 setUnreadCountToZero:(bool)arg4;
- (void)updateStateForChat:(id)arg1 forcePost:(bool)arg2 shouldRebuildFailedMessageDate:(bool)arg3 shouldCalculateUnreadCount:(bool)arg4;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(bool)arg4 hintMessage:(id)arg5 shouldRebuildFailedMessageDate:(bool)arg6 shouldCalculateUnreadCount:(bool)arg7 setUnreadCountToZero:(bool)arg8;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(bool)arg3;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(bool)arg3 setUnreadCountToZero:(bool)arg4;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2 shouldRebuildFailedMessageDate:(bool)arg3 shouldCalculateUnreadCount:(bool)arg4;
- (bool)updateSyncedSyndicationRanges:(id)arg1 forGUID:(id)arg2;
- (bool)updateUnreadCountForChat:(id)arg1;
- (void)waitForLoadedChatsWithCompletionHandler:(id /* block */)arg1;

@end