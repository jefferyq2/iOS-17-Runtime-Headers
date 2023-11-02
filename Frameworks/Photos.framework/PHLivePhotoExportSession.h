
@interface PHLivePhotoExportSession : NSObject {
    NSArray * _fileURLs;
    NSURL * _imageURL;
    NSURL * _videoURL;
}

@property (nonatomic, readonly) NSArray *fileURLs;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic, retain) NSURL *videoURL;

+ (bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id*)arg2;
+ (bool)_identifyResourceURLs:(id)arg1 outImageURL:(id*)arg2 outVideoURL:(id*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_isOutputURLValid:(id)arg1 withOptions:(id)arg2 error:(out id*)arg3;
- (id)fileURLs;
- (id)imageURL;
- (id)initWithResourceFileURLs:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)videoURL;
- (id)writeToFileURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

@end