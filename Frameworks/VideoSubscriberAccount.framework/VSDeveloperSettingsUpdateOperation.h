
@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation {
    VSDeveloperServiceConnection * _connection;
    VSOptional * _result;
    VSDeveloperSettings * _settings;
}

@property (nonatomic, retain) VSDeveloperServiceConnection *connection;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, copy) VSDeveloperSettings *settings;

- (void).cxx_destruct;
- (id)connection;
- (void)executionDidBegin;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)result;
- (void)setConnection:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end