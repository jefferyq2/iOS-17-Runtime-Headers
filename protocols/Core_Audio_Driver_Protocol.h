
@protocol Core_Audio_Driver_Protocol

@required

- (void)abort_device_configuration_change:(void *)arg1 action:(void *)arg2 change:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned int, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)add_device_client:(void *)arg1 client_info:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)create_device:(void *)arg1 client_info:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, void*
- (void)destroy_device:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)get_property_data:(void *)arg1 qualifier:(void *)arg2 data_size:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; }, NSData *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)get_property_data_size:(void *)arg1 qualifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; }, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, void*
- (void)has_property:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned char, void*
- (void)initialize:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)is_property_settable:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned char, void*
- (void)object_was_destroyed:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)perform_device_configuration_change:(void *)arg1 action:(void *)arg2 change:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: unsigned int, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)register_io_buffer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: Core_Audio_XPC_Raw_Transporter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)remove_device_client:(void *)arg1 client_info:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)retain_reply_for_process_boost:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)set_property_data:(void *)arg1 qualifier:(void *)arg2 data:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: struct Driver_Property_Identity { unsigned int x1; int x2; struct AudioObjectPropertyAddress { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; }, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)start_io:(void *)arg1 client_id:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)start_synchronous_messenger:(void *)arg1 client_id:(void *)arg2 nominal_sample_rate:(void *)arg3 io_buffer_frame_size:(void *)arg4 work_group_port:(void *)arg5 io_messenger:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 12: unsigned int, unsigned int, double, unsigned int, Core_Audio_XPC_Raw_Transporter *, Core_Audio_XPC_Raw_Transporter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)stop_io:(void *)arg1 client_id:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)stop_synchronous_messenger:(void *)arg1 client_id:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)unregister_io_buffer:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: Core_Audio_XPC_Raw_Transporter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end