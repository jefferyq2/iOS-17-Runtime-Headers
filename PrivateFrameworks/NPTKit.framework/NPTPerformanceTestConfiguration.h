
@interface NPTPerformanceTestConfiguration : NSObject <NSCopying> {
    NSString * _bonjourHost;
    bool  _collectMetadata;
    bool  _collectWRMMetrics;
    long long  _concurrentStreams;
    int  _downloadSize;
    bool  _endWhenStable;
    NSString * _interfaceName;
    int  _interfaceType;
    bool  _multiStream;
    int  _pingAddressStyle;
    unsigned long long  _pingCount;
    bool  _stopAtFileSize;
    unsigned long long  _testDuration;
    int  _uploadSize;
    bool  _useSecureConnection;
    NSString * _uuid;
    NSString * privateClientName;
    NSURL * privateDownloadURL;
    bool  privateLegacyMode;
    NSString * privatePingHost;
    NSURL * privateUploadURL;
}

@property (nonatomic, readonly) NetworkQualityConfiguration *NQConfiguration;
@property (nonatomic, readonly) NetworkQualityConfiguration *NQDownloadConfiguration;
@property (nonatomic, readonly) NetworkQualityConfiguration *NQUploadConfiguration;
@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (nonatomic, retain) NSString *bonjourHost;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) bool collectMetadata;
@property (nonatomic) bool collectWRMMetrics;
@property (nonatomic) long long concurrentStreams;
@property (nonatomic) int downloadSize;
@property (nonatomic, retain) NSURL *downloadURL;
@property (nonatomic) bool endWhenStable;
@property (nonatomic) bool forceWiFi;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) int interfaceType;
@property (nonatomic) bool legacyMode;
@property (nonatomic) bool multiStream;
@property (nonatomic) int pingAddressStyle;
@property (nonatomic) unsigned long long pingCount;
@property (nonatomic, retain) NSString *pingHost;
@property (nonatomic) bool stopAtFileSize;
@property (nonatomic) unsigned long long testDuration;
@property (nonatomic) int uploadSize;
@property (nonatomic, retain) NSURL *uploadURL;
@property (nonatomic) bool useSecureConnection;
@property (nonatomic, retain) NSString *uuid;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationCellular;
+ (id)defaultConfigurationWiFi;
+ (id)defaultConfigurationWiredEthernet;
+ (id)evaluateInterfaceName:(int)arg1;
+ (id)fileSizeConfigurationWithTimeout:(int)arg1 timeout:(unsigned long long)arg2 downloadFileSize:(int)arg3 uploadFileSize:(int)arg4;
+ (id)interfaceServiceName:(int)arg1;

- (void).cxx_destruct;
- (id)NQConfiguration;
- (id)NQDownloadConfiguration;
- (id)NQUploadConfiguration;
- (id)asDictionary;
- (id)bonjourHost;
- (id)cdnDownloadURL;
- (id)cdnUploadURL;
- (id)clientName;
- (bool)collectMetadata;
- (bool)collectWRMMetrics;
- (long long)concurrentStreams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)customURLSet;
- (id)description;
- (int)downloadSize;
- (id)downloadURL;
- (bool)endWhenStable;
- (bool)forceWiFi;
- (id)init;
- (id)interfaceName;
- (int)interfaceType;
- (bool)legacyMode;
- (bool)multiStream;
- (int)pingAddressStyle;
- (unsigned long long)pingCount;
- (id)pingHost;
- (void)setBonjourHost:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setCollectMetadata:(bool)arg1;
- (void)setCollectWRMMetrics:(bool)arg1;
- (void)setConcurrentStreams:(long long)arg1;
- (void)setDownloadSize:(int)arg1;
- (void)setDownloadURL:(id)arg1;
- (void)setEndWhenStable:(bool)arg1;
- (void)setForceWiFi:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setLegacyMode:(bool)arg1;
- (void)setMultiStream:(bool)arg1;
- (void)setPingAddressStyle:(int)arg1;
- (void)setPingCount:(unsigned long long)arg1;
- (void)setPingHost:(id)arg1;
- (void)setStopAtFileSize:(bool)arg1;
- (void)setTestDuration:(unsigned long long)arg1;
- (void)setUploadSize:(int)arg1;
- (void)setUploadURL:(id)arg1;
- (void)setUseSecureConnection:(bool)arg1;
- (void)setUuid:(id)arg1;
- (bool)stopAtFileSize;
- (unsigned long long)testDuration;
- (int)uploadSize;
- (id)uploadURL;
- (bool)useSecureConnection;
- (id)uuid;

@end