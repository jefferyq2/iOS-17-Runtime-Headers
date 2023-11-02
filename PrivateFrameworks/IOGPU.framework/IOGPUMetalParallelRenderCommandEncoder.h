
@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)endEncoding;
- (unsigned long long)getType;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (bool)isMemorylessRender;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end