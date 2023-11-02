
@interface _SFAccountManagerViewController : _SFAccountTableViewController <PMGeneratedPasswordsLogDelegate, PMTOTPMigrationControllerDelegate, PSStateRestoration, SFAccountDetailViewControllerDelegate, SFAccountManagerPlatterWithDeclineButtonCellDelegate, SFAccountTableViewCellDelegate, SFAddSavedAccountViewControllerDelegate, SFMoveAccountsToGroupPickerViewControllerDelegate, SFSharedAccountsGroupCreationFlowNavigationControllerDelegate, SFSharedAccountsGroupInvitationViewControllerDelegate, SFSharedAccountsGroupInvitationsListViewControllerDelegate, SFSharedAccountsGroupViewControllerDelegate, SFTableViewDiffableDataSourceDelegate, SafariPasswordManagersControllerDelegate, UIAdaptivePresentationControllerDelegate, WBSOngoingSharingGroupProviderSubscriber, _ASAccountAuthenticationModificationExtensionManagerObserver, _SFAccountManagerLockableContentContainer, _SFSharedSiteMetadataManagerProvider> {
    SFAccountListSectionIdentifier * _accountSourcesSectionIdentifier;
    UIBarButtonItem * _addNavigationBarItem;
    SFAddSavedAccountViewController * _addPasswordViewController;
    NSArray * _allSharedAccountsGroups;
    NSArray * _allSharedAccountsGroupsInvitations;
    SFAutoFillFeatureManager * _autoFillFeatureManager;
    UITableViewCell * _autoFillPasswordsCell;
    WBSAutoFillQuirksManager * _autoFillQuirksManager;
    UIBarButtonItem * _cancelNavigationBarItem;
    UIBarButtonItem * _cancelToolbarItem;
    <_SFAccountManagerViewControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteNavigationBarItem;
    UIBarButtonItem * _deleteToolbarItem;
    SFAccountDetailViewController * _detailViewController;
    SFTableViewDiffableDataSource * _diffableDataSource;
    UIBarButtonItem * _editNavigationBarItem;
    UIBarButtonItem * _editToolbarItem;
    UIBarButtonItem * _ellipsisNavigationBarItem;
    WBSGeneratedPassword * _generatedPasswordBeingTransformedIntoSavedAccount;
    NSArray * _generatedPasswordsMatchingSearchPattern;
    bool  _hasBeenAuthenticated;
    bool  _hasEverShownSectionHeaders;
    bool  _hasLoadedPasswords;
    bool  _hasLoadedSecurityRecommendations;
    bool  _isContentUnavailable;
    bool  _isFirstWillAppear;
    bool  _isLoadingFamilyMembersFromFamilyTip;
    bool  _isObservingExtensionManagers;
    WBSPasswordGenerationManager * _passwordGenerator;
    WBSPasswordWarningManager * _passwordWarningManager;
    unsigned long long  _persona;
    SFSharablePassword * _receivedInvalidSharablePassword;
    SFSharablePassword * _receivedSharablePasswordRequiringPromptBeforeSaving;
    WBSSavedAccountStore * _savedAccountStore;
    WBSSavedAccount * _savedAccountToRemoveAfterCompletedUpgradeInDetailView;
    SFAccountManagerDrillInTableViewCellWithTrailingNumber * _securityRecommendationsCell;
    SFAccountListSectionIdentifier * _securityRecommendationsSectionIdentifier;
    NSString * _securityRecommendationsSubtitleText;
    NSMutableSet * _selectedSavedAccounts;
    KCSharingGroup * _sharedAccountsGroup;
    SFAccountListSectionIdentifier * _sharedAccountsGroupManagementSectionIdentifier;
    bool  _shouldShowGroupExitAlert;
    bool  _shouldShowSharingGroupWelcomeView;
    _SFSiteMetadataManager * _siteMetadataManager;
    SFAccountListSectionIdentifier * _tipSectionIdentifier;
    long long  _tipToShow;
    PMTOTPMigrationController * _totpMigrationController;
    UINavigationController * _totpMigrationNavigationController;
    bool  _userIsEditingCellInTableView;
    UITableViewCell * _viewGroupDetailsCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFAccountManagerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (nonatomic) bool shouldShowSharingGroupWelcomeView;
@property (nonatomic, readonly) bool shouldSuppressAccountManagerLockedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountCellDataForUser:(id)arg1 highLevelDomain:(id)arg2;
- (id)_accountSourcesSectionIdentifier;
- (void)_addAccountSourcesSectionToItemsToSnapshot:(id)arg1;
- (id)_addButtonMenu;
- (id)_addButtonMenuForGroupDetailView;
- (id)_addButtonMenuForTopLevelView;
- (void)_addItemsAboveAccountListForGroupDetailViewToSnapshot:(id)arg1;
- (void)_addItemsAboveAccountListForTopLevelAccountManagerToSnapshot:(id)arg1;
- (void)_addNewPassword:(id)arg1;
- (void)_addSecurityRecommendationsSectionItemsToSnapshot:(id)arg1;
- (id)_alertTitleForInvalidSharableAccount:(id)arg1;
- (id)_autoFillCellForTableView:(id)arg1;
- (id)_autoFillFeatureManager;
- (void)_beginEditing;
- (bool)_canAddPasswords;
- (void)_cancelEditing;
- (void)_cancelNavigationBarItemTapped:(id)arg1;
- (id)_cellForIdentifier:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_checkForTipsToShow;
- (void)_configureNavigationBar;
- (void)_configureTableView;
- (void)_createNewFamilySharedCredentialsGroup;
- (id)_createPasswordOptionsViewController;
- (void)_deleteAccountsAtIndexPaths:(id)arg1;
- (void)_deleteButtonTapped:(id)arg1;
- (unsigned long long)_detailViewOptionsForSavedAccount:(id)arg1;
- (void)_didSelectAutoFillCellAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)_editNavigationBarItemTapped:(id)arg1;
- (id)_ellipsisButtonMenu;
- (void)_fetchSharedAccountsGroups;
- (void)_fetchUpdatedGroup;
- (void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
- (void)_generatedPasswordStoreDidChange;
- (long long)_indexOfFirstPasswordSection;
- (bool)_isAccountCellAtIndexPath:(id)arg1;
- (void)_managedConfigurationSettingsDidChange:(id)arg1;
- (void)_openiCloudKeychainSettings;
- (void)_presentAddSavedAccountViewController:(id)arg1;
- (void)_presentAlertForInvalidSharableAccount:(id)arg1;
- (void)_presentAlertForSharableAccountWithPasswordConflicts:(id)arg1;
- (void)_presentAlertTellingUserThatMembersOfDeletedGroupMightHaveAccessToAccounts:(id)arg1;
- (void)_presentAlertTellingUserThatMembersOfGroupTheyLeftMightHaveAccessToAccounts:(id)arg1;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg1;
- (void)_presentAlertToConfirmDeletingAccountsAtIndexPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentDetailViewController:(id)arg1;
- (void)_presentDuplicateCodeGeneratorAlert;
- (void)_presentErrorAlertForFailingToMoveAccount:(id)arg1 toGroup:(id)arg2;
- (void)_presentErrorAlertWithString:(id)arg1;
- (void)_presentGeneratedPasswordsViewFilteredUsingSearchPattern:(bool)arg1;
- (void)_presentGroupManagementViewController;
- (void)_presentGroupManagementViewControllerForStartingAcceleratedAddMembersFlow:(bool)arg1;
- (void)_presentInvalidOtpauthMigrationURLAlert;
- (void)_presentInvalidOtpauthURLAlert;
- (void)_presentMovePasswordsToExistingGroupViewController;
- (void)_presentViewControllerForGroupIDIfPossible:(id)arg1;
- (void)_reconfigureFamilyTipCells;
- (void)_reloadAccountSourcesSection;
- (void)_reloadSavedAccounts;
- (void)_reloadSavedAccountsAndTableViewData;
- (void)_reloadSecurityRecommendationsSection;
- (id)_rightToolbarItem;
- (id)_saveSharableAccount:(id)arg1;
- (id)_saveSharableAccountWithPasswordConflicts:(id)arg1;
- (void)_savedAccountStoreDidChange;
- (bool)_sectionWithIndexIsConfigurationSection:(long long)arg1;
- (id)_securityRecommendationsSectionIdentifier;
- (void)_setAccessibilityIdentifiersOnAccountCell:(id)arg1;
- (void)_setUserInterfaceElementsEnabled:(bool)arg1;
- (id)_sharableAccountFromResourceDictionary:(id)arg1;
- (id)_sharedAccountsGroupManagementSectionIdentifier;
- (id)_sharedCredentialsGroupEditCellForGroup:(id)arg1;
- (bool)_shouldReconfigureAddNavigationBarButton;
- (bool)_shouldShowAutoFillItem;
- (bool)_shouldShowEllipsisNavigationItem;
- (bool)_shouldShowGeneratedPasswordSearchResultItem;
- (bool)_shouldShowGeneratedPasswordsEllipsisMenuItem;
- (bool)_shouldShowRecentlyDeletedSectionInGroup;
- (bool)_shouldShowSectionHeaders;
- (bool)_shouldShowSecurityRecommendationsItem;
- (void)_showSharingGroupWelcomeView;
- (void)_softDeleteAccountsAtIndexPaths:(id)arg1;
- (id)_tableViewHeaderView;
- (id)_tipSectionIdentifier;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)_updateContentUnavailableView;
- (void)_updateDeleteButton;
- (void)_updateGeneratedPasswordsMatchingSearchPattern;
- (void)_updateHeaderAndFooterViewsFloat;
- (void)_updateNavigationBarItems;
- (void)_updateSecurityRecommendationsSubtitleTextWithWarnings:(id)arg1;
- (void)_updateToolbarItemsAnimated:(bool)arg1;
- (void)_userChoseToUseTip:(long long)arg1;
- (long long)_warningStyleForSecurityRecommendationsDrillInCell;
- (void)addSavedAccountViewControllerDidFinish:(id)arg1 withSavedAccount:(id)arg2;
- (id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg1 didAuthenticate:(bool)arg2;
- (bool)canBeShownFromSuspendedState;
- (bool)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)dataSource:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)dataSource:(id)arg1 headerTextForSection:(long long)arg2;
- (long long)dataSource:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)dealloc;
- (id)delegate;
- (void)groupCreationFlowNavigationController:(id)arg1 finishedWithGroup:(id)arg2 error:(id)arg3;
- (void)groupProviderReceivedUpdates:(id)arg1;
- (void)groupViewController:(id)arg1 didDeleteGroupWithMemberNames:(id)arg2;
- (void)groupViewController:(id)arg1 didLeaveGroupWithMemberNames:(id)arg2;
- (void)handleContextMenuDeleteForIndexPath:(id)arg1;
- (void)handleIconDidUpdateForDomain:(id)arg1;
- (id)iconControllerForAddSavedAccountDetailViewController:(id)arg1;
- (id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2 persona:(unsigned long long)arg3 group:(id)arg4;
- (void)invitationViewController:(id)arg1 acceptedInvitationForGroup:(id)arg2;
- (void)invitationViewController:(id)arg1 declinedInvitationForGroup:(id)arg2;
- (void)invitationViewController:(id)arg1 failedToAcceptInvitationWithError:(id)arg2;
- (void)invitationViewController:(id)arg1 failedToDeclineInvitationWithError:(id)arg2;
- (void)invitationViewControllerChoseNotToRespondToInvitation:(id)arg1;
- (void)invitationsListViewController:(id)arg1 acceptedInviteToGroup:(id)arg2;
- (void)moveAccountsToGroupPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)arg1;
- (id)navigationItem;
- (id)newSharedSiteMetadataManager;
- (id)passwordGeneratorForAccountDetailViewController:(id)arg1;
- (void)passwordManagerLogViewControllerWantsToDismiss;
- (void)passwordManagerLogViewControllerWantsToSaveGeneratedPassword:(id)arg1;
- (void)passwordManagerWillLock;
- (id)passwordWarningManagerForAccountDetailViewController:(id)arg1;
- (void)presentConfirmationAlertToShareSavedAccount:(id)arg1 toGroup:(id)arg2;
- (void)presentSharedAccountGroupCreationFlowWithSavedAccountToAddToNewlyCreatedGroup:(id)arg1;
- (id)savedAccountControllerForQuery:(id)arg1 queryBundleID:(id)arg2 authenticationRequirementsMet:(bool)arg3;
- (id)savedAccountToRemoveAfterCompletedUpgradeInDetailView;
- (void)searchPatternDidUpdate;
- (id)sectionIndexTitlesForDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSavedAccountToRemoveAfterCompletedUpgradeInDetailView:(id)arg1;
- (void)setShouldShowSharingGroupWelcomeView:(bool)arg1;
- (void)setToolbarItems:(id)arg1 animated:(bool)arg2;
- (bool)shouldShowSharingGroupWelcomeView;
- (void)showConflictAlertForSharablePasswordIfNecessary;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)totpMigrationController:(id)arg1 presentDetailsForSavedAccount:(id)arg2;
- (void)totpMigrationController:(id)arg1 presentPickerForGenerator:(id)arg2;
- (void)totpMigrationControllerFinishedImport:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAccessibilityIdentifierForAccountCell:(id)arg1;
- (void)updateUserAuthenticationState:(bool)arg1;
- (void)userDidPressDeclineButtonForPlatterTableViewCell:(id)arg1;
- (id)viewControllerForOtpauthMigrationWithURLResourceDictionary:(id)arg1;
- (id)viewControllerForOtpauthWithURLResourceDictionary:(id)arg1;
- (id)viewControllerForTOTPGenerator:(id)arg1;
- (id)viewControllerToPresentWithURLResourceDictionary:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end