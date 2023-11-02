
@interface _DPReportFileManager : NSObject {
    _DPDaemonConnection * _connection;
    NSString * _reportsDirectoryPath;
}

@property (nonatomic, readonly) _DPDaemonConnection *connection;
@property (nonatomic, copy) NSString *reportsDirectoryPath;

+ (id)submittedReports;
+ (id)submittedReportsInDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)reportsDirectoryPath;
- (id)reportsNotYetSubmitted;
- (void)retireReports:(id)arg1;
- (void)setReportsDirectoryPath:(id)arg1;

@end