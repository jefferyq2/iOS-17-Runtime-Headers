
@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _companionSimLabelId;
    NSUUID * _companionSlotUuid;
    CTPlan * _ctPlan;
    NSString * _iccid;
    bool  _isActiveDataPlan;
    bool  _isDefaultVoice;
    bool  _isLocalTransferToeSIMSupported;
    bool  _isSelectable;
    NSNumber * _isSelectedOverride;
    bool  _isSimStateValid;
    bool  _isTransferred;
    NSString * _label;
    long long  _lockState;
    NSString * _name;
    NSString * _phoneNumber;
    CTCellularPlan * _plan;
    long long  _settingsMode;
    bool  _shouldAppearDisabled;
    bool  _shouldAutoSelectWhenInRange;
    bool  _shouldDisplay;
    bool  _shouldDisplayExtendedConsentInfo;
    bool  _shouldDisplayType;
    int  _status;
    unsigned long long  _supportedTransferOption;
    long long  _transferredStatus;
    NSString * _transferredToDeviceDisplayName;
    long long  _type;
    CTUserLabel * _userLabel;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, copy) NSString *companionSimLabelId;
@property (nonatomic, copy) NSUUID *companionSlotUuid;
@property (nonatomic, readonly) CTPlan *ctPlan;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isActiveDataPlan;
@property (nonatomic, readonly) bool isBackedByCellularPlan;
@property (nonatomic, readonly) bool isCheckingCellularConnectivity;
@property (nonatomic) bool isDefaultVoice;
@property (nonatomic, readonly) bool isInstalling;
@property (nonatomic) bool isLocalTransferToeSIMSupported;
@property (nonatomic) bool isSelectable;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, retain) NSNumber *isSelectedOverride;
@property (nonatomic) bool isSimStateValid;
@property (nonatomic) bool isTransferred;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) long long lockState;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) CTCellularPlan *plan;
@property (nonatomic) long long settingsMode;
@property (nonatomic) bool shouldAppearDisabled;
@property (nonatomic) bool shouldAutoSelectWhenInRange;
@property (nonatomic) bool shouldDisplay;
@property (nonatomic) bool shouldDisplayExtendedConsentInfo;
@property (nonatomic) bool shouldDisplayType;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long supportedTransferOption;
@property (nonatomic, readonly) long long transferredStatus;
@property (nonatomic, readonly) NSString *transferredToDeviceDisplayName;
@property (nonatomic) long long type;
@property (nonatomic, retain) CTUserLabel *userLabel;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierName;
- (id)companionSimLabelId;
- (id)companionSlotUuid;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctPlan;
- (id)customDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)identifier;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(long long)arg5 phoneNumber:(id)arg6 label:(id)arg7 isLocalTransferToeSIMSupported:(bool)arg8 isTransferred:(bool)arg9 transferredStatus:(long long)arg10 transferredToDeviceDisplayName:(id)arg11 supportedTransferOption:(unsigned long long)arg12 settingsMode:(long long)arg13;
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(long long)arg3 phoneNumber:(id)arg4 label:(id)arg5 transferredStatus:(long long)arg6 transferredToDeviceDisplayName:(id)arg7 supportedTransferOption:(unsigned long long)arg8 settingsMode:(long long)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5 isLocalTransferToeSIMSupported:(bool)arg6 isTransferred:(bool)arg7 transferredStatus:(long long)arg8 transferredToDeviceDisplayName:(id)arg9 supportedTransferOption:(unsigned long long)arg10 settingsMode:(long long)arg11;
- (bool)isActiveDataPlan;
- (bool)isBackedByCellularPlan;
- (bool)isCheckingCellularConnectivity;
- (bool)isDefaultVoice;
- (bool)isInstalling;
- (bool)isLocalTransferToeSIMSupported;
- (bool)isSelectable;
- (bool)isSelected;
- (id)isSelectedOverride;
- (bool)isSimStateValid;
- (bool)isTransferred;
- (id)label;
- (long long)lockState;
- (id)name;
- (id)phoneNumber;
- (id)plan;
- (id)redactedDescription;
- (void)setCompanionSimLabelId:(id)arg1;
- (void)setCompanionSlotUuid:(id)arg1;
- (void)setIsActiveDataPlan:(bool)arg1;
- (void)setIsDefaultVoice:(bool)arg1;
- (void)setIsLocalTransferToeSIMSupported:(bool)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setIsSelectedOverride:(id)arg1;
- (void)setIsSimStateValid:(bool)arg1;
- (void)setIsTransferred:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLockState:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSettingsMode:(long long)arg1;
- (void)setShouldAppearDisabled:(bool)arg1;
- (void)setShouldAutoSelectWhenInRange:(bool)arg1;
- (void)setShouldDisplay:(bool)arg1;
- (void)setShouldDisplayExtendedConsentInfo:(bool)arg1;
- (void)setShouldDisplayType:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setSupportedTransferOption:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUserLabel:(id)arg1;
- (long long)settingsMode;
- (id)settingsModeAsString:(long long)arg1;
- (bool)shouldAppearDisabled;
- (bool)shouldAutoSelectWhenInRange;
- (bool)shouldDisplay;
- (bool)shouldDisplayExtendedConsentInfo;
- (bool)shouldDisplayType;
- (int)status;
- (unsigned long long)supportedTransferOption;
- (long long)transferredStatus;
- (id)transferredStatusAsString:(long long)arg1;
- (id)transferredToDeviceDisplayName;
- (long long)type;
- (id)typeAsString:(long long)arg1;
- (id)userLabel;
- (id)uuid;

@end