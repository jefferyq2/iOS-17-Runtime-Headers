
@interface SCNSkinner : NSObject <NSSecureCoding> {
    SCNGeometry * _baseGeometry;
    bool  _bonesAndIndicesCompression;
    SCNNode * _skeleton;
    struct __C3DSkinner { } * _skinner;
}

@property (nonatomic, retain) SCNGeometry *baseGeometry;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } baseGeometryBindTransform;
@property (nonatomic, readonly) SCNGeometrySource *boneIndices;
@property (nonatomic, readonly) NSArray *boneInverseBindTransforms;
@property (nonatomic, readonly) SCNGeometrySource *boneWeights;
@property (nonatomic, readonly) NSArray *bones;
@property (nonatomic) SCNNode *skeleton;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (struct __C3DSkinner { }*)_createSkinnerWithCompressedData:(id)arg1 bonesCount:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
+ (struct __C3DSkinner { }*)_createSkinnerWithVertexCount:(long long)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 baseGeometry:(id)arg5;
+ (id)_skinnerWithBaseGeometry:(id)arg1 skinnableGeometry:(id)arg2 bones:(id)arg3 boneInverseBindTransforms:(id)arg4 bindMatrix:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg5;
+ (struct __C3DSkinner { }*)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4;
+ (id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5;
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner { }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (bool)_bonesAndIndicesCompression;
- (void)_setBaseGeometry:(id)arg1;
- (bool)_setSkeleton:(id)arg1;
- (void)_syncObjCModel;
- (id)baseGeometry;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })baseGeometryBindTransform;
- (id)boneIndices;
- (id)boneInverseBindTransforms;
- (id)boneWeights;
- (id)bones;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkinnerRef:(struct __C3DSkinner { }*)arg1;
- (id)joints;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setBaseGeometry:(id)arg1;
- (void)setBaseGeometryBindTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setBoneInverseBindTransforms:(id)arg1;
- (void)setBones:(id)arg1;
- (void)setSkeleton:(id)arg1;
- (void)set_bonesAndIndicesCompression:(bool)arg1;
- (id)skeleton;
- (struct __C3DSkinner { }*)skinnerRef;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)avt_skinnerByInterpolatingFromSkinner:(id)arg1 toSkinner:(id)arg2 factor:(float)arg3 skeleton:(id)arg4;

- (void)avt_setSimdBaseGeometryBindTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })avt_simdBaseGeometryBindTransform;

@end