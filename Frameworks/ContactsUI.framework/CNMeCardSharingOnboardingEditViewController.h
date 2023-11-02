
@interface CNMeCardSharingOnboardingEditViewController : CNMeCardSharingOnboardingViewController <CNAvatarEditingManagerDelegate, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNPhotoPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    CNMutableContact * _avatarCarouselEditingContact;
    CNMeCardSharingOnboardingAvatarCarouselViewController * _avatarCarouselViewController;
    <AVTAvatarRecord> * _avatarRecord;
    CNContact * _contact;
    CNContactStore * _contactStore;
    <CNMeCardSharingOnboardingEditViewControllerDelegate> * _delegate;
    bool  _delegateDoesRespondToOnboardingResultSelector;
    CNMutableContact * _editingContact;
    NSString * _editingFamilyName;
    NSString * _editingGivenName;
    UITextField * _familyNameField;
    UITextField * _givenNameField;
    CNMeCardSharingOnboardingHeaderViewController * _headerViewController;
    CNMeCardSharingPickerLayoutAttributes * _layoutAttributes;
    CNSharingProfileLogger * _logger;
    long long  _nameOrder;
    <CNMeCardSharingNameProvider> * _nameProvider;
    CNPhotoPickerViewController * _photoPickerViewController;
    CNAvatarEditingManager * _posePicker;
    bool  _shouldSetAsMeContact;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) CNMutableContact *avatarCarouselEditingContact;
@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselViewController;
@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingOnboardingEditViewControllerDelegate> *delegate;
@property (nonatomic) bool delegateDoesRespondToOnboardingResultSelector;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNMutableContact *editingContact;
@property (nonatomic, retain) NSString *editingFamilyName;
@property (nonatomic, retain) NSString *editingGivenName;
@property (nonatomic, retain) UITextField *familyNameField;
@property (nonatomic, retain) UITextField *givenNameField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNMeCardSharingOnboardingHeaderViewController *headerViewController;
@property (nonatomic, retain) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (nonatomic, readonly) CNSharingProfileLogger *logger;
@property (nonatomic) long long nameOrder;
@property (nonatomic, retain) <CNMeCardSharingNameProvider> *nameProvider;
@property (nonatomic, retain) CNPhotoPickerViewController *photoPickerViewController;
@property (nonatomic, retain) CNAvatarEditingManager *posePicker;
@property (nonatomic) bool shouldSetAsMeContact;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (void).cxx_destruct;
- (void)adjustInsetsForKeyboardOverlap:(double)arg1;
- (id)avatarCarouselEditingContact;
- (id)avatarCarouselViewController;
- (void)avatarCarouselViewControllerDidTapPhotoPickerCell:(id)arg1;
- (void)avatarCarouselViewControllerDidUpdateCenterMostItem:(id)arg1;
- (void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (id)avatarRecord;
- (id)confirmButtonTitle;
- (id)contact;
- (long long)contactImageSourceForType:(unsigned long long)arg1;
- (id)contactStore;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)delegateDoesRespondToOnboardingResultSelector;
- (id)editingContact;
- (id)editingFamilyName;
- (id)editingGivenName;
- (void)familyNameDidChange:(id)arg1;
- (id)familyNameField;
- (void)finishOnboardingWithDidSaveToMeContact:(bool)arg1;
- (void)finishOnboardingWithProviderItem:(id)arg1;
- (void)givenNameDidChange:(id)arg1;
- (id)givenNameField;
- (void)handleConfirmButtonTapped;
- (id)headerViewController;
- (id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 avatarRecord:(id)arg4;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)layoutAttributes;
- (id)logger;
- (long long)nameOrder;
- (id)nameProvider;
- (void)notifyDelegateWithContactImage:(id)arg1 didSaveToMeContact:(bool)arg2;
- (void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3;
- (void)photoPickerDidCancel:(id)arg1;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (id)photoPickerViewController;
- (id)posePicker;
- (void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(id /* block */)arg1;
- (void)presentPhotoPickerVariantListForItem:(id)arg1 FromViewController:(id)arg2;
- (void)promptForSavingToMeCard;
- (void)saveDraftContact;
- (void)setAvatarCarouselEditingContact:(id)arg1;
- (void)setAvatarCarouselViewController:(id)arg1;
- (void)setAvatarRecord:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateDoesRespondToOnboardingResultSelector:(bool)arg1;
- (void)setEditingContact:(id)arg1;
- (void)setEditingFamilyName:(id)arg1;
- (void)setEditingGivenName:(id)arg1;
- (void)setFamilyNameField:(id)arg1;
- (void)setGivenNameField:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setNameOrder:(long long)arg1;
- (void)setNameProvider:(id)arg1;
- (void)setPhotoPickerViewController:(id)arg1;
- (void)setPosePicker:(id)arg1;
- (void)setShouldSetAsMeContact:(bool)arg1;
- (void)setVariantsManager:(id)arg1;
- (bool)shouldSetAsMeContact;
- (void)showAvatarPosePickerFromItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textFieldForIndex:(long long)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateAvatarCarouselContactName;
- (void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2;
- (id)variantsManager;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end