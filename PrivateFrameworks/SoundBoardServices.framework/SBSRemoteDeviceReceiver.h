
@interface SBSRemoteDeviceReceiver : NSObject {
    RPCompanionLinkClient * _client;
    <SBSImplementerInternal> * _delegate;
}

@property (retain) RPCompanionLinkClient *client;
@property (nonatomic) <SBSImplementerInternal> *delegate;

- (void).cxx_destruct;
- (void)_deregisterClearHomeSWUpdate;
- (void)_deregisterDisassociateCurrentNetwork;
- (void)_deregisterDisassociateNetworkWithName;
- (void)_deregisterEverything;
- (void)_deregisterGetAllDebugInfo;
- (void)_deregisterGetFeatureFlags;
- (void)_deregisterGetInstalledProfiles;
- (void)_deregisterGetLEDInfo;
- (void)_deregisterGetPowerEstimateForInterval;
- (void)_deregisterGetSelectDebugInfo;
- (void)_deregisterGetTuningInfo;
- (void)_deregisterGetUserDefaults;
- (void)_deregisterGetVolume;
- (void)_deregisterHandoffCancel;
- (void)_deregisterHandoffComplete;
- (void)_deregisterHandoffStart;
- (void)_deregisterHandoffStartWithArtworkColors;
- (void)_deregisterHandoffUpdateIntensity;
- (void)_deregisterIdentifyWithOptions;
- (void)_deregisterInjectSWUpdateToHome;
- (void)_deregisterInstallProfileData;
- (void)_deregisterIntercomWithOptions;
- (void)_deregisterIsDeviceStereoFollower;
- (void)_deregisterObliterate;
- (void)_deregisterPlayTone;
- (void)_deregisterReboot;
- (void)_deregisterRemoveProfileByIdentifier;
- (void)_deregisterRender;
- (void)_deregisterRequestDeferredReboot;
- (void)_deregisterRequestForFetchingAlarmsAndTimers;
- (void)_deregisterResetAllUserDefaults;
- (void)_deregisterResetUserDefault;
- (void)_deregisterSUScanForSoftwareUpdate;
- (void)_deregisterSendButtonCommand;
- (void)_deregisterSendLEDCommand;
- (void)_deregisterSetBootSpinner;
- (void)_deregisterSetDeviceAsStereoLeader;
- (void)_deregisterSetFeatureFlags;
- (void)_deregisterSetHomeUpdateState;
- (void)_deregisterSetLEDContents;
- (void)_deregisterSetTuningInfoOnBox;
- (void)_deregisterSetUserDefaults;
- (void)_deregisterSetVolume;
- (void)_deregisterSetWifiEnabled;
- (void)_deregisterSiriSay;
- (void)_deregisterStopTone;
- (void)_deregisterSysdiagnoseHasStarted;
- (void)_deregisterTriggerWiFiCoreCapture;
- (void)_registerClearHomeSWUpdate;
- (void)_registerDisassociateCurrentNetwork;
- (void)_registerDisassociateNetworkWithName;
- (void)_registerEverything;
- (void)_registerGetAllDebugInfo;
- (void)_registerGetFeatureFlags;
- (void)_registerGetInstalledProfiles;
- (void)_registerGetLEDInfo;
- (void)_registerGetPowerEstimateForInterval;
- (void)_registerGetSelectDebugInfo;
- (void)_registerGetTuningInfo;
- (void)_registerGetUserDefaults;
- (void)_registerGetVolume;
- (void)_registerHandoffCancel;
- (void)_registerHandoffComplete;
- (void)_registerHandoffStart;
- (void)_registerHandoffStartWithArtworkColors;
- (void)_registerHandoffUpdateIntensity;
- (void)_registerIdentifyWithOptions;
- (void)_registerInjectSWUpdateToHome;
- (void)_registerInstallProfileData;
- (void)_registerIntercomWithOptions;
- (void)_registerIsDeviceStereoFollower;
- (void)_registerObliterate;
- (void)_registerPlayTone;
- (void)_registerReboot;
- (void)_registerRemoveProfileByIdentifier;
- (void)_registerRender;
- (void)_registerRequestDeferredReboot;
- (void)_registerRequestForFetchingAlarmsAndTimers;
- (void)_registerResetAllUserDefaults;
- (void)_registerResetUserDefault;
- (void)_registerSUScanForSoftwareUpdate;
- (void)_registerSendButtonCommand;
- (void)_registerSendLEDCommand;
- (void)_registerSetBootSpinner;
- (void)_registerSetDeviceAsStereoLeader;
- (void)_registerSetFeatureFlags;
- (void)_registerSetHomeUpdateState;
- (void)_registerSetLEDContents;
- (void)_registerSetTuningInfoOnBox;
- (void)_registerSetUserDefaults;
- (void)_registerSetVolume;
- (void)_registerSetWifiEnabled;
- (void)_registerSiriSay;
- (void)_registerStopTone;
- (void)_registerSysdiagnoseHasStarted;
- (void)_registerTriggerWiFiCoreCapture;
- (id)client;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;

@end