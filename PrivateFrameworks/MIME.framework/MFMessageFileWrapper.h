
@interface MFMessageFileWrapper : NSObject {
    NSMutableDictionary * _attributes;
    NSData * _data;
    NSString * _filename;
    NSString * _linkDestination;
    NSString * _path;
    NSString * _preferredFilename;
    int  _type;
    NSString * _url;
}

@property (nonatomic, copy) NSString *path;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (void).cxx_destruct;
- (id)URL;
- (void)_isImage:(bool*)arg1 orPDFFile:(bool*)arg2;
- (id)contentID;
- (unsigned int)creator;
- (void)dealloc;
- (id)description;
- (id)eventUniqueID;
- (id)fileAttributes;
- (id)fileProtection;
- (unsigned long long)fileSize;
- (id)fileWrappers;
- (id)filename;
- (unsigned short)finderFlags;
- (id)icsRepresentation;
- (id)inferredMimeType;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isDirectory;
- (bool)isImageFile;
- (bool)isPDFFile;
- (bool)isPlaceholder;
- (bool)isRegularFile;
- (bool)isSymbolicLink;
- (bool)isUnzippableFile;
- (id)meetingStorePersistentID;
- (id)messageID;
- (id)mimeType;
- (id)path;
- (id)preferredFilename;
- (id)regularFileContents;
- (void)setContentID:(id)arg1;
- (void)setCreator:(unsigned int)arg1;
- (void)setEventUniqueID:(id)arg1;
- (void)setFileAttributes:(id)arg1;
- (void)setFileProtection:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setICSRepresentation:(id)arg1;
- (void)setMeetingStorePersistentID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setURL:(id)arg1;
- (id)symbolicLinkDestination;
- (unsigned int)type;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (id)supportedArchivedClassNames;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end