
@interface SBSApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (id)_initForSubclass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ShortcutUIKit.framework/ShortcutUIKit

+ (id)_scui_defaultImage;

- (id)_scui_iconImageWithAssetProvider:(id)arg1;
- (id)scui_iconImageWithAssetProvider:(id)arg1;

@end