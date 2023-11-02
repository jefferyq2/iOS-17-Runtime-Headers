
@interface MTLTelemetrySamplerState : MTLToolsSamplerState {
    MTLSamplerDescriptor * _descriptor;
    bool  isAniso;
}

@property (nonatomic, readonly, copy) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (id)descriptor;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (void)setSamplerStatsWithDescriptor:(id)arg1 telemetryStat:(struct MTLTelemetrySamplerStatRec { unsigned int x1; struct MTLTelemetryStatisticUIRec { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned long long x_2_1_3; unsigned int x_2_1_4; } x2; struct MTLTelemetryStatisticUIRec { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned long long x_3_1_3; unsigned int x_3_1_4; } x3; struct MTLTelemetryStatisticUIRec { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned long long x_4_1_3; unsigned int x_4_1_4; } x4; struct MTLTelemetryStatisticUIRec { unsigned int x_5_1_1; unsigned int x_5_1_2; unsigned long long x_5_1_3; unsigned int x_5_1_4; } x5; struct MTLTelemetryStatisticFRec { float x_6_1_1; float x_6_1_2; float x_6_1_3; unsigned int x_6_1_4; } x6; struct MTLTelemetryStatisticFRec { float x_7_1_1; float x_7_1_2; float x_7_1_3; unsigned int x_7_1_4; } x7; struct MTLTelemetryStatisticUIRec { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned long long x_8_1_3; unsigned int x_8_1_4; } x8; }*)arg2;

@end